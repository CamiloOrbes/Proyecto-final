#ifndef BALON_H
#define BALON_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>

class balon: public QGraphicsItem  //clase para graficra los balones
{
public:
    balon(float _x, float _y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();

private:
    float x,y;
};
#endif // BALON_H
