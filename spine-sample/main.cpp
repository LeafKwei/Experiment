#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    
    const QUrl main_url("qrc:/qml/windowframe.qml");
    QObject::connect(
        &engine, 
        &QQmlApplicationEngine::objectCreated, 
        &app, 
        [main_url] (QObject *object, const QUrl &url) -> void{
            if(main_url == url && object == nullptr){  //When failed to load engine, terminate program with an error code
                exit(-1);
            }
            
            qInfo() << "We have created qmlengine";
        },
        Qt::ConnectionType::QueuedConnection
    );
    
    engine.load(main_url);   //Load url and detect result by above
    return app.exec();
}
