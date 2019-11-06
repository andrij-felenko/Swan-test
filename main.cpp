#include <QGuiApplication>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlContext>
#include "contactwithphone.h"
#include "contactwithphoto.h"

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);
    QObjectList contactList;
    contactList.push_back(new ContactWithPhone("Just number", "+380xxxxxxxxx"));
    contactList.push_back(new ContactWithPhoto("Just photo", "qrc:/image.png"));

    QQuickView view;
    qmlRegisterType <ContactBase> ("ContactBase", 1, 0, "C_Type");
    view.rootContext()->setContextProperty("ContactModel", QVariant::fromValue(contactList));
    view.setSource(QUrl("qrc:/main.qml"));
    view.resize(500, 350);
    view.setX(500);
    view.setY(200);
    view.show();

    app.exec();
}
