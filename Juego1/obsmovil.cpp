#include "obsmovil.h"

ObsMovil::ObsMovil(int _x, int _y)
{
    x=_x;
    y=_y;

}

QRectF ObsMovil::boundingRect() const
{
    return QRectF(x,y,50,150);
}

void ObsMovil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/images/obsta.jpg");
    painter->drawPixmap(this->boundingRect(),pixmap,pixmap.rect());
}

void ObsMovil::rotar(int r)
{
    rot+=r;
    setTransformOriginPoint(x,y);
    setRotation(rot);
    //this->rotation();
}
