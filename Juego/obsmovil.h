#ifndef OBSMOVIL_H
#define OBSMOVIL_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>


class Obsmovil : public QGraphicsItem
{
public:
    Obsmovil(float _x, float _y,float,float) ;
    QString imagen;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();
    float getX1();
    float getX2();

    void actualizar();
    void reset_pos(float,float);
    float get_ang();
    float get_px();
    float get_py();
private:
    float x,y,x1,y1;

    float px, py;
    float g=-9.8;
    float dt=0.01;
    float pi=3.14159;
    float teta=pi/18,a=0,w=0;
};

#endif // OBSMOVIL_H
