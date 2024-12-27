TEMPLATE = lib
TARGET=qspine
CONFIG += staticlib
DESTDIR = ../lib

INCLUDEPATH += \
	./include \
	../spine-cpp/include

HEADERS += \
	include/qspine.h \
    ../spine-cpp/include/spine/*.h

SOURCES += \
	QSpineExtension.cpp \
	QSpineTextureLoader.cpp
