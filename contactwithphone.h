#ifndef CONTACTWITHPHONE_H
#define CONTACTWITHPHONE_H

#include "contactbase.h"

class ContactWithPhone : public ContactBase
{
    Q_OBJECT
    Q_PROPERTY(QString phone READ phone NOTIFY phoneChanged)
public:
    ContactWithPhone(QString name = QString(""), QString phoneNumber = QString("2"));
    QString phone() const;
    ContactType type() const override;

signals:
    void phoneChanged(QString phone);

private:
    QString m_phone;
};

#endif // CONTACTWITHPHONE_H
