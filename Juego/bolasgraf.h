#ifndef BOLASGRAF_H
#define BOLASGRAF_H

#include "bolas.h"
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>

class BolasGraf: public QGraphicsItem
{
public:
    BolasGraf(float, float, int );
    ~BolasGraf();
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //define como se pintara el objeto
    void actualizar(float v_lim);
    Bolas* getEsf();
private:
    Bolas* esf; //se crea un puntero tipo cuerpo para las posiciones
    int color;

};

#endif // BOLASGRAF_H
