#ifndef VISITORBASE_H
#define VISITORBASE_H

#include <QObject>

class VisitorBase : public QObject
{
    Q_OBJECT
public:
    explicit VisitorBase(QObject *parent = nullptr);

signals:

};

#endif // VISITORBASE_H
