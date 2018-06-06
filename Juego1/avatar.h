#ifndef AVATAR_H
#define AVATAR_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>

class Avatar:public QGraphicsItem
{
public:
    Avatar(float _x,float _y, QString imagen,float _r,float _z);
    QString imagen;
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();
private:
    float x,y,r,z;
};

#endif // AVATAR_H

