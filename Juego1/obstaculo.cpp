#include "obstaculo.h"

Obstaculo::Obstaculo(float _x, float _y, QString imagen)
{
    this->imagen=imagen;
    x=_x;
    y=_y;
    y1=150;
    x1=70;
}

QRectF Obstaculo::boundingRect() const{
    return QRectF(x,y,70,150);
}

void Obstaculo::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPixmap pixmap;
    pixmap.load(":/images/"+imagen);
    pixmap.scaledToWidth(100);
    QRectF recf = boundingRect();
    painter->drawPixmap(recf.toRect(),pixmap);
}

float Obstaculo::getX(){return x;}
float Obstaculo::getY(){return y;}

float Obstaculo::getX1(){return x1;}

float Obstaculo::getX2(){return y1;}
