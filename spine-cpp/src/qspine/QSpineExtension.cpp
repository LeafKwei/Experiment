#include "spine/Extension.h"
#include "spine/SpineString.h"

using namespace spine;

class QSpineExtension : public SpineExtension{
    virtual void *_alloc(size_t size, const char *file, int line) override{
    
    }

    virtual void *_calloc(size_t size, const char *file, int line) override{
    
    }

    virtual void *_realloc(void *ptr, size_t size, const char *file, int line) override{
    
    }

    virtual void _free(void *mem, const char *file, int line) override{
    
    }

    virtual char *_readFile(const String &path, int *length) override{
    
    }
};

namespace spine{
    SpineExtension* getDefaultExtension(){
        return new DefaultSpineExtension();
    }
}