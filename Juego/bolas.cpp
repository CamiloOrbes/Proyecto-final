#include "bolas.h"

Bolas::Bolas(float velX_, float velY_)
{
    px = 0;
    py = 0;
    masa = 100;
    R = 20;
    vx = velX_;
    vy = velY_;
    ax = 0;
    ay = 0;
    g = 9.8;
    v = 0;
    dt = 0.1;
}

void Bolas::actualizar()
{
    v = pow((pow(vx,2)+pow(vy,2)),(1/2));

    alfa = atan2(vy,vx);
    ax = -((K*pow(v,2)*pow(R,2))/masa)*cos(alfa);
    ay = (-((K*(v*v)*(R*R))/masa)*sin(alfa))-g;

    px += ((vx*(dt))) + (((ax*(dt*dt)))/2);
    py += ((vy*(dt))) + (((ay*(dt*dt)))/2);
    vx += ax*dt;
    vy += ay*dt;
}

float Bolas::get_posX()
{
    return px;
}

float Bolas::get_posY()
{
    return py;
}

float Bolas::get_Radio()
{
    return R;
}

float Bolas::get_e()
{
    return e;
}

float Bolas::get_velX()
{
    return vx;
}

float Bolas::get_velY()
{
    return vy;
}

float Bolas::get_masa()
{
    return masa;
}

void Bolas::set_vel(float vx_, float vy_, float px_, float py_)
{
    vx = vx_;
    vy = vy_;
    px = px_;
    py = py_;
}
