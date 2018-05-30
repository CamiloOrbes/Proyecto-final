#include "obsmovil.h"

Obsmovil::Obsmovil(float _x, float _y, float x11, float y11)
{
    this->imagen="Madera.png";
    x=_x;
    y=_y;
    y1=y11;
    x1=x11;

}
#include "obstaculo.h"

QRectF Obsmovil::boundingRect() const{
    return QRectF(x,y,x1,y1);
}

void Obsmovil::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPixmap pixmap;
    pixmap.load(":/images/"+imagen);
    pixmap.scaledToWidth(100);
    QRectF recf = boundingRect();
    painter->drawPixmap(recf.toRect(),pixmap);
}

float Obsmovil::getX(){return x;}
float Obsmovil::getY(){return y;}

float Obsmovil::getX1(){return x1;}

float Obsmovil::getX2(){return y1;}

void Obsmovil::actualizar()
{
    a=g*cos(teta);
    w+=a*dt;
    teta+=w*dt+((1/2)*a*dt*dt);
    x=200*cos(teta);
    y=200*sin(teta);
    px-=x;
    py=-y;
    this->setPos(px,py);

}

void Obsmovil::reset_pos(float posx,float posy)
{
    px=posx;
    py=posy;
}

float Obsmovil::get_ang()
{
    return teta;
}

float Obsmovil::get_px()
{
    return px;
}

float Obsmovil::get_py()
{
    return py;
}
