#include "apuntador.h"
#include <QDebug>

apuntador::apuntador(float _x, float _y)
{
    x=_x;
    y=_y;
}

QRectF apuntador::boundingRect() const{
    return QRectF(x,y,40, 40);
}
void apuntador::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/images/apuntador.png");
    painter->drawPixmap(x,y,40,40,pixmap);

}
float apuntador::getX(){return x;}
float apuntador::getY(){return y;}

void apuntador::setX(float _x){
    x=x+_x;
    setPos(x,y);}

void apuntador::setY(float _y){
    y=y+_y;
    setPos(x,y);}

void apuntador::border(int x0, int y0, int w, int h)
{
    if(x<=x0){
        x=x0;
    }
    if(x>=x0+w){
        x=x0+w;
    }
    if(y<=y0){
        y=y0;
    }
    if(y>=y0+h){
        y=y0+h;
    }
}

