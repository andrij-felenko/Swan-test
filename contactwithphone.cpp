#include "contactwithphone.h"

ContactWithPhone::ContactWithPhone(QString name, QString phoneNumber)
    : ContactBase(name), m_phone(phoneNumber)
{
    //
}

QString ContactWithPhone::phone() const
{
    return m_phone;
}

ContactBase::ContactType ContactWithPhone::type() const
{
    return ContactType::WithPhone;
}
