#ifndef CONTACTWITHPHOTO_H
#define CONTACTWITHPHOTO_H

#include "contactbase.h"
#include <QImage>

class ContactWithPhoto : public ContactBase
{
    Q_OBJECT
    Q_PROPERTY(QString photo READ photo NOTIFY photoChanged)
public:
    ContactWithPhoto(QString name = QString(""), QString imageSource = QString("1"));
    QString photo() const;
    ContactType type() const override;

signals:
    void photoChanged(QString photo);

private:
    QString m_photo;
};

#endif // CONTACTWITHPHOTO_H
