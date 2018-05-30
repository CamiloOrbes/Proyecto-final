#ifndef ARBITROS_H
#define ARBITROS_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include<QPixmap>


class arbitros:public QGraphicsItem
{
public:
    arbitros(float _x, float _y, QString imagen);
	QString imagen;
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    float getX();
    float getY();
    void setAA(float _ancho, float _alto);
private:
    float x,y,ancho=150,alto=200;

};

#endif // ARBITROS_H
