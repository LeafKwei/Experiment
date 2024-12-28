#include "qspine/qspine.h"
#include <iostream>

using namespace spine;
using namespace qspine;

QSpineTextureLoader::QSpineTextureLoader(){
    std::cout << "construct3" << std::endl;
}

QSpineTextureLoader::~QSpineTextureLoader(){
    std::cout << "deconstruct" << std::endl;
}

void QSpineTextureLoader::load(AtlasPage &page, const String &path){

}

void QSpineTextureLoader::unload(void *texture){
    
}
