#ifndef QSPINE_H
#define QSPINE_H

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

}
#endif
