#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "context_property/cppworker.h"

void context_property_main(QQmlApplicationEngine& engine,CppWorker& worker)
{
	//rejestracja klasy w qml
	engine.rootContext()->setContextProperty("BWorker",&worker);
	engine.load(QUrl(QStringLiteral("qrc:/context_property/main.qml")));
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

	CppWorker worker;

	//ZAWSZE SILNIK TWORZ NA KONCU
	QQmlApplicationEngine engine;

	context_property_main(engine,worker);

	if (engine.rootObjects().isEmpty())
		return -1;
    return app.exec();
}
