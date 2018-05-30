#include "cuadrados.h"

Cuadrados::Cuadrados(int _x, int _y, int _h, int col)
{
    h=_h;
    x=_x;
    y=_y;
    color=col;
}


QRectF Cuadrados::boundingRect() const
{
    return QRectF (x,y,h,h);
}

void Cuadrados::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        if (color==0){
                painter->setBrush(Qt::gray);
            }
            if (color==1){
                painter->setBrush(Qt::blue);
            //painter->drawRect(boundingRect());
            //painter->setBrush(Qt::red);
            //painter->drawEllipse(QRectF(x+(h/4), y-(h/4), h*(3/4),h*(3/4)));
            }

            if (color==2){
                painter->setBrush(Qt::red);
            //painter->drawRect(boundingRect());
            //painter->setBrush(Qt::red);
            //painter->drawEllipse(QRectF(x+(h/4), y-(h/4), h*(3/4),h*(3/4)));
            }

            if (color==3){
                painter->setBrush(Qt::green);
            //painter->setBrush(Qt::red);
            //painter->drawEllipse(QRectF(x+(h/4), y-(h/4), h*(3/4),h*(3/4)));
            }
            painter->drawRect(boundingRect());
        }


int Cuadrados::get_tam()
{
    return h;
}

int Cuadrados::get_x()
{
    return x;
}

int Cuadrados::get_y()
{
    return y;
}

void Cuadrados::cambio_color(int _color)
{
    color=_color;
}
