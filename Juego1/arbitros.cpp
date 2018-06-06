#include "arbitros.h"

arbitros::arbitros(float _x, float _y, QString imagen)
{
	this->imagen = imagen;
    x=_x;
    y=_y;


}

QRectF arbitros::boundingRect() const{
    return QRectF(x,y,alto,ancho);
}

void arbitros::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPixmap pixmap;
    pixmap.load(":/images/"+imagen);
	pixmap.scaledToWidth(150);
	QRectF recf = boundingRect();
    painter->drawPixmap(recf.toRect(),pixmap);
}

float arbitros::getX(){return x;}
float arbitros::getY(){return y;}

void arbitros::setAA(float _ancho, float _alto)
{
    ancho=_ancho;
    alto=_alto;
}
