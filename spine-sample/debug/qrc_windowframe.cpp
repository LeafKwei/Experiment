/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifdef _MSC_VER
// disable informational message "function ... selected for automatic inline expansion"
#pragma warning (disable: 4711)
#endif

static const unsigned char qt_resource_data[] = {
  // windowframe.qml
  0x0,0x0,0x0,0xae,
  0x69,
  0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,0x6b,0x20,0x32,0x2e,
  0x30,0xd,0xa,0x69,0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,
  0x6b,0x2e,0x43,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x73,0x20,0x32,0x2e,0x31,0xd,0xa,
  0xd,0xa,0x41,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x57,0x69,0x6e,
  0x64,0x6f,0x77,0x7b,0xd,0xa,0x20,0x20,0x20,0x20,0x76,0x69,0x73,0x69,0x62,0x6c,
  0x65,0x3a,0x20,0x74,0x72,0x75,0x65,0xd,0xa,0x20,0x20,0x20,0x20,0x77,0x69,0x64,
  0x74,0x68,0x3a,0x20,0x37,0x32,0x30,0xd,0xa,0x20,0x20,0x20,0x20,0x68,0x65,0x69,
  0x67,0x68,0x74,0x3a,0x20,0x34,0x38,0x30,0xd,0xa,0x20,0x20,0x20,0x20,0x74,0x69,
  0x74,0x6c,0x65,0x3a,0x20,0x71,0x73,0x54,0x72,0x28,0x22,0x41,0x7a,0x75,0x72,0x50,
  0x65,0x74,0x22,0x29,0xd,0xa,0x20,0x20,0x20,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,
  0x20,0x22,0x23,0x65,0x38,0x65,0x38,0x65,0x38,0x22,0xd,0xa,0x7d,
  
};

static const unsigned char qt_resource_name[] = {
  // qml
  0x0,0x3,
  0x0,0x0,0x78,0x3c,
  0x0,0x71,
  0x0,0x6d,0x0,0x6c,
    // windowframe.qml
  0x0,0xf,
  0x1,0x5c,0x17,0x1c,
  0x0,0x77,
  0x0,0x69,0x0,0x6e,0x0,0x64,0x0,0x6f,0x0,0x77,0x0,0x66,0x0,0x72,0x0,0x61,0x0,0x6d,0x0,0x65,0x0,0x2e,0x0,0x71,0x0,0x6d,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/qml
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/qml/windowframe.qml
  0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x94,0x27,0x9,0xde,0xb,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#if defined(QT_INLINE_NAMESPACE)
inline namespace QT_NAMESPACE {
#elif defined(QT_NAMESPACE)
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_windowframe)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_windowframe)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_windowframe)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_windowframe)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_windowframe)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_windowframe)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
