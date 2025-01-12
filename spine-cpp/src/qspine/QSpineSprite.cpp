#include "qspine/qspine.h"

using namespace spine;
using namespace qspine;

QSpineSprite::QSpineSprite(QQuickItem *parent) : 
    QQuickFramebufferObject(parent)
    
{
    
}

QSpineSprite::~QSpineSprite(){

}

QUrl QSpineSprite::atlasPath(){

}

QUrl QSpineSprite::skelPath(){

}

const QStringList& QSpineSprite::animations(){

}

const QStringList& QSpineSprite::skins(){

}

void QSpineSprite::setAtlasPath(QUrl &path){

}

void QSpineSprite::setSkelPath(QUrl &path){

}

void QSpineSprite::setAnimations(QStringList &animations){

}
        
void QSpineSprite::setSkins(QStringList &skins){

}