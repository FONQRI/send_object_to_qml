#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "property_class.h"

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QGuiApplication app(argc, argv);

	QQmlApplicationEngine engine;
	engine.load(QUrl(QLatin1String("qrc:/main.qml")));
	if (engine.rootObjects().isEmpty())
	return -1;

	property_class m_object;
	engine.rootContext()->setContextProperty("cpp_object", &m_object);

	return app.exec();
}
