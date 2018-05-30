#include "canon.h"

Canon::Canon(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/Imagenes/Canoncito.png"));
}

int Canon::rotar(int xx, int yy)
{
    int x=-xx;
    int y=yy;
    y-=600;

    int angulo = atan(y/x);

    setRotation(angulo);
}

