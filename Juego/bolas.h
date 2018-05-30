#ifndef BOLAS_H
#define BOLAS_H

#include <math.h>
#include <cmath>

class Bolas
{
private:
    float px;//posicion en x
    float py;//posicion en y
    float masa;//masa del cuerpo
    float R;//radio del cuerpo
    float vx;//velocidad en x
    float vy;//velocidad en y
    float alfa;//angulo en el que va el cuerpo.
    float ax;//aceleracion en x
    float ay;//aceleracion en y
    float g;//gravedad
    float K=0.01;//resistencia del aire
    float e=0.7;//coeficiente de restitucion.
    float v;//vector velocidad.
    float dt;//delta de tiempo.
public:
    Bolas(float velX_, float velY_);
    void actualizar();
    float get_posX();
    float get_posY();
    float get_Radio();
    float get_e();
    float get_velX();
    float get_velY();
    float get_masa();
    void set_vel(float vx_, float vy_, float px_, float py_);

};

#endif // BOLAS_H

class Movimiento
{
private:
    float up; //movimiento hacia arriba
    float down;//movimiento hacia abajo
    float aceleracion;
public:
    float get_up();//Recibe el valor up generado por la interaccion con el arduino
    float get_down();//Recibe el valor down generado por la interaccion con el arduino
    float aceleracion();//Recibe la aceleracion generada por el acelerometro


}
