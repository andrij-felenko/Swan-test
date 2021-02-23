#include <QGuiApplication>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlContext>
#include "contactwithphone.h"
#include "contactwithphoto.h"

// тип данних что возвращаються      имя функции   ( набор переменних что передаються в функцию )
// то что функция делает

int summa(int first, int second){
    return first + second;
}

void vuvesti(QString str){
    qDebug() << str;
}

int Fact1(int n, int i)
{
    if (i==n)
        return n; // умова завершення рекурсивного процесу
    else
        return i*Fact1(n, i+1); // перехід до наступного числа i+1
}

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);
    QObjectList contactList;
    contactList.push_back(new ContactWithPhone("Just number", "+380xxxxxxxxx"));
    contactList.push_back(new ContactWithPhoto("Just photo", "qrc:/image.png"));

//    double result;
//    double first = 4;
//    double second = -6;
//    char znak = '-';

//    if (znak == '+')
//        result = first + second;
//    else if (znak == '-')
//        result = first - second;
//    else if (znak == '*')
//        result = first * second;
//    else if (znak == '/')
//        result = first / second;
//    else
//        result = 0;

//    switch (znak){
//    case '+': result = first + second; break;
//    case '-': result = first - second; break;
//    case '*': result = first * second; break;
//    case '/': result = first / second; break;
//    default:;
//    }

//    int i = 0;

//    while (i <= 10){
//        qDebug() << i;
//        i++;// i = i + 1
//    }

//    do {
//        qDebug() << i;
//        i++;
//    } while (false);

//    int i = 0;
//    while (i < 10){
//        qDebug() << i;
//        i++;
//    }

//    for (int i = 0; i < 10; i++)
//        qDebug() << i;

//    int massive[4] = { 3, 4, 5, 5 };

//    std::string str = "na stene";
//    for (unsigned int i = 0; i < 8; i++) // i = i + 1 - инкримент
//        qDebug() << str[i];

    std::map <unsigned int, std::string> days;
    days[0] = "monday";
    days[1] = "tuesday";
    days[2] = "wednesday";
    days[3] = "thursday";
    days[4] = "friday";
    days[5] = "saturday";
    days[6] = "sunday";

    std::map <std::string, std::string> dictionary;
    dictionary["derevo"] = "tree";

//    std::cout << dictionary["derevo"];

    class Humanoid {
    public:
        std::string name;
        int ves;
        int rost;
        int birthday;
    };

    std::map <long /*номер паспорта*/, Humanoid> humanoList;
    std::multimap <std::string/*имя человека и фамилия*/, Humanoid> humanoidList;

//    qDebug() << result;

//    QQuickView view;
//    qmlRegisterType <ContactBase> ("ContactBase", 1, 0, "C_Type");
//    view.rootContext()->setContextProperty("ContactModel", QVariant::fromValue(contactList));
//    view.setSource(QUrl("qrc:/main.qml"));
//    view.resize(500, 350);
//    view.setX(500);
//    view.setY(200);
//    view.show();

    app.exec();
}
