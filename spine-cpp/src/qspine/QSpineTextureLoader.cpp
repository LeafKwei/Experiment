#include "qspine/qspine.h"
#include <iostream>

using namespace spine;
using namespace qspine;

QSpineTextureLoader::QSpineTextureLoader(){
    this -> quickWindow = new QQuickWindow();
    this -> quickWindow->show();
}

QSpineTextureLoader::~QSpineTextureLoader(){
    
}

void QSpineTextureLoader::load(AtlasPage &page, const String &path){
    
}

void QSpineTextureLoader::unload(void *texture){
    
}
