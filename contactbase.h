#ifndef CONTACTBASE_H
#define CONTACTBASE_H

#include <QString>
#include <QObject>

class ContactBase : public QObject
{
    Q_OBJECT
    Q_PROPERTY(ContactType type READ type CONSTANT)
    Q_PROPERTY(QString contactName READ contactName CONSTANT)
public:
    ContactBase(QString contactName = QString(""));
    QString contactName() const;

    enum ContactType {
        None,
        WithPhoto,
        WithPhone
    }; Q_ENUMS(ContactType)

    virtual ContactType type() const;

private:
    QString m_contactName;
};

#endif // CONTACTBASE_H
