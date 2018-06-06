#ifndef OBSTACULO_H
#define OBSTACULO_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>

class Obstaculo: public QGraphicsItem
{
public:
    Obstaculo(float _x,float _y,QString imagen);
    QString imagen;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();
    float getX1();
    float getX2();
private:
    float x,y,x1,y1;

};

#endif // OBSTACULO_H



