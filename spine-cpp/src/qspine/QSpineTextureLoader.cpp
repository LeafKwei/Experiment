#include "qspine/qspine.h"
#include <iostream>
#include <QFile>
#include <QImage>
#include <QSGTexture>

using namespace spine;
using namespace qspine;

QSpineTextureLoader::QSpineTextureLoader(){
    
}

QSpineTextureLoader::~QSpineTextureLoader(){
    
}

void QSpineTextureLoader::load(AtlasPage &page, const String &path){
    QString qpath(path.buffer());
    
    if(!QFile::exists(QString(qpath))){
        qWarning() << "No such file: " << qpath;
        return;
    }
    
    if(quickWindow){
        QImage image(qpath);
        QSGTexture *gltexure = quickWindow -> createTextureFromImage(image);
        gltexure -> setFiltering(QSGTexture::Linear);
        gltexure -> setMipmapFiltering(QSGTexture::Linear);
        page.texture = gltexure;
    }
    else{
        qWarning() << "QML initialization failed";
    }
}

void QSpineTextureLoader::unload(void *texture){
    delete texture;
}
