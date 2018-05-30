#include "avatar.h"

Avatar::Avatar(float _x, float _y, QString imagen, float _r,float _z)
{
    this->imagen = imagen;
    x=_x;
    y=_y;
    r=_r;
    z=_z;
}



QRectF Avatar::boundingRect() const{
    return QRectF(x,y,r,z);
}

void Avatar::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPixmap pixmap;
    pixmap.load(":/images/"+imagen);
    pixmap.scaledToWidth(200);
    QRectF recf = boundingRect();
    painter->drawPixmap(recf.toRect(),pixmap);
}

float Avatar::getX(){return x;}
float Avatar::getY(){return y;}

