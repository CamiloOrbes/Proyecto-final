#include "balon.h"

balon::balon(float _x, float _y)
{
    x=_x;
    y=_y;
}

QRectF balon::boundingRect() const{
    return QRectF(x,y,100,100);
}
void balon::paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPixmap pixmap;
    pixmap.load(":/images/baseball.png");
    painter->drawPixmap(x,y,50,50,pixmap);
}
float balon::getX(){return x;}
float balon::getY(){return y;}

