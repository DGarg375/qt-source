#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName("brightness_app");
    app.setOrganizationName("xyz");
    app.setOrganizationDomain("abc.com");

    QQmlApplicationEngine engine;
    engine.load(QUrl::fromLocalFile("Main_Brightness.qml"));
    // QObject::connect(
    //     &engine,
    //     &QQmlApplicationEngine::objectCreationFailed,
    //     &app,
    //     []() { QCoreApplication::exit(-1); },
    //     Qt::QueuedConnection);
    // engine.loadFromModule("brightness", "Main");

    return app.exec();
}
