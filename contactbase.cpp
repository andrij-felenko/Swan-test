#include "contactbase.h"

ContactBase::ContactBase(QString contactName) : m_contactName(contactName)
{
    //
}

QString ContactBase::contactName() const
{
    return m_contactName;
}

ContactBase::ContactType ContactBase::type() const
{
    return ContactType::None;
}
