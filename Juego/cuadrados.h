#ifndef CUADRADOS_H
#define CUADRADOS_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <stdlib.h>

class Cuadrados: public QGraphicsItem
{
private:
    int x,y,h;
    int color=1;
public:
    Cuadrados(int,int,int,int);
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
    int get_tam();
    int get_x();
    int get_y();
    void cambio_color(int color);
    //int get_color;

};

#endif // CUADRADOS_H
