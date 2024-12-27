#include "widget.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    /* test */
    QFile file("./res/changmen/changmen.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(file.isOpen()){
        char buf[128];
        loop:
            qint64 nbytes = file.read(buf, 127);
            buf[nbytes] = '\0';
            qDebug() << buf;
            if(nbytes == 127)
                goto loop;
        file.close();
    }
    else{
        qDebug() << "Failed to open `" << file.fileName() << "`" << ", cause by " << file.errorString();
    }

    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
