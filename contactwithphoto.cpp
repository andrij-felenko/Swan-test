#include "contactwithphoto.h"

ContactWithPhoto::ContactWithPhoto(QString name, QString imageSource)
    : ContactBase(name), m_photo(imageSource)
{
    //
}

QString ContactWithPhoto::photo() const
{
    return m_photo;
}

ContactBase::ContactType ContactWithPhoto::type() const
{
    return ContactType::WithPhoto;
}
