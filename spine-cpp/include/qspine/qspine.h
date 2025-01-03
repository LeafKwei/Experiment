#ifndef QSPINE_H
#define QSPINE_H

#include <QtQuick/QQuickWindow>
#include <QQuickFramebufferObject>
#include "spine/spine.h"
#include "spine/TextureLoader.h"

typedef int Vertex;

namespace qspine {
class QSpineTextureLoader : public spine::TextureLoader{
    public:
        QSpineTextureLoader();
        virtual void load(spine::AtlasPage &page, const spine::String &path) override;
        virtual void unload(void *texture) override;
        ~QSpineTextureLoader() override;
        
    private:
        QQuickWindow *m_window;

    public:
        static QSpineTextureLoader* instance();
        
    private:
        static QSpineTextureLoader *m_loaderinstance;
};

class QSpineSkeletonRender{
    public:
        QSpineSkeletonRender();
        void drawSkeleton(spine::Skeleton &skeleton);
        ~QSpineSkeletonRender();
        
    private:
        spine::Vector<Vertex> vertices;
        spine::SkeletonRenderer renderer; 
};

class QSpineSprite : public QQuickFramebufferObject
{
    Q_OBJECT
    Q_PROPERTY(QUrl atlasPath READ atlasPath WRITE setAtlasPath NOTIFY atlasPathChanged FINAL)
    Q_PROPERTY(QUrl skelPath READ skelPath WRITE setSkelPath NOTIFY skelPathChanged FINAL)
    Q_PROPERTY(QStringList animations READ animations WRITE setAnimations NOTIFY animationsChanged FINAL)
    Q_PROPERTY(QStringList skins READ skins WRITE setSkins NOTIFY skinsChanged FINAL)
    
    public slots:
        
    signals:
        void atlasPathChanged();
        void skelPathChanged();
        void animationsChanged();
        void skinsChanged();
        
    public:
        QSpineSprite(QQuickItem *parent = nullptr);
        ~QSpineSprite();
        
        QUrl atlasPath();
        QUrl skelPath();
        const QStringList& animations();
        const QStringList& skins();
        
        void setAtlasPath(QUrl &path);
        void setSkelPath(QUrl &path);
        void setAnimations(QStringList &animations);
        void setSkins(QStringList &skins);

    private:
        QUrl m_atlasPath;
        QUrl m_skelPath;
        QStringList m_animations;
        QStringList m_skins;
};

}
#endif
