#ifndef APUNTADOR_H
#define APUNTADOR_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>
#include <QMouseEvent>


class apuntador: public QGraphicsItem
{
public:
    apuntador(float _x, float _y);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();
    void setX(float _x);
    void setY(float _y);
    void border(int x0, int y0, int w, int h);
    void caer();
private:
    float x;
    float y;


};


#endif // APUNTADOR_H
