#include <iostream>
#include "libreria.h"
#include <math.h>

using namespace std;

extern unsigned int var;

float g = 0;
float x, y, vx, vy;

void calcParabolico(void);
void print_results(void);


int main()
{
    unsigned short int des3 = 5;
    lib_func1();
    var = 100;
    var += des3;

    //Calculando los parametros en la Tierra con g = 9.8 m/s*s
    g = 9.8;
    calcParabolico();
    print_results();

    g = 1.62;
    //Calculando los parametros en la Luna con g = 1.62 m/s*s
    calcParabolico();
    print_results();


    return 0;
}

void calcParabolico(void)
{
    float vx0, vy0;
    const float v0 = 1, y0 = 1;
    float t = 5.5;

    vx0 = v0 * cos(ALPHA);
    vy0 = v0 * sin(ALPHA);

    vx = vx0;
    vy = vy0-g*t;

    x = vx*t;
    y = y0+vy0*t-(g*pow(t,2)/2);
}

void print_results(void)
{
    std::cout<<"Los resultados del calculo parabolico son: "<<std::endl;
    std::cout<<"Velocidad en x: "<<vx<<", ";
    std::cout<<"Velocidad en y: "<<vy<<", ";
    std::cout<<"Posicion en x: "<<x<<", ";
    std::cout<<"Posicion en y: "<<y<<std::endl;
}



