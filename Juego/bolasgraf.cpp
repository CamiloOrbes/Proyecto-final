#include "bolasgraf.h"

BolasGraf::BolasGraf(float velx, float vely, int col)
{
    //aqui se ponen los valores aleatoreos de cada cuerpo.
    esf = new Bolas(velx,vely);
    color=col;
}

BolasGraf::~BolasGraf()
{
    delete esf;
}

QRectF BolasGraf::boundingRect() const
{
    return QRectF(-1*esf->get_Radio(),-1*esf->get_Radio(),2*esf->get_Radio(),2*esf->get_Radio());
}

void BolasGraf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if (color==1){
        painter->setBrush(Qt::blue);    //asigna el color
    }

    if (color==2){
        painter->setBrush(Qt::red);     //asigna el color
    }

    if (color==3){
            painter->setBrush(Qt::green);   //asigna el color
    }

    painter->drawEllipse(boundingRect());       //dibuja una elipse encerrada en la boundingRect
}

void BolasGraf::actualizar(float v_lim)
{
    esf->actualizar();//actualiza los datos de las  posiciones del cuerpo
    setPos(esf->get_posX(),(v_lim - esf->get_posY()));// actualiza posiciones en la interfaz
}

Bolas *BolasGraf::getEsf()
{
    return esf;
}

