#ifndef OBSMOVIL_H
#define OBSMOVIL_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class ObsMovil : public QGraphicsItem
{
private:
    int x, y, rot=0;

public:
    ObsMovil(int,int);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void rotar(int r);
};

#endif // OBSMOVIL_H
