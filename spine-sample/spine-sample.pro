TEMPLATE = app
DESTDIR=../bin

QT       += core gui
LIBS += -L $$PWD/../lib -lspine-cpp

win32{
	QMAKE_POST_LINK += -mkdir \"../bin/res\" && xcopy \"$$PWD/res\" \"../bin/res\" /s/y
}

linux{
	QMAKE_POST_LINK += -mkdir \"../bin/res\" && cp -rf \"$$PWD/res\" \"../bin/res\"
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
