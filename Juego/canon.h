#ifndef CANON_H
#define CANON_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMouseEvent>



class Canon:public QObject,public QGraphicsPixmapItem
{   Q_OBJECT
public:
    Canon(QGraphicsItem * parent=0);
    int rotar(int,int);

};

#endif // CANON_H
