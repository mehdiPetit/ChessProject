#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Game.h"
int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
    return app.exec();

    /*Game game;
    game.play();*/
    return 0;

}
