/* Esta libreria es necesaria para el programa en la funcion main *
 * pero tiene errores :-S                                         *
 */

#include <iostream>
#include "libreria.h"
#include <math.h>

#define pi 3.14159

unsigned int var;

void lib_func1(void)
{
    std::cout<<"Esta funcion solo cambia el valor de la variable global var"<<std::endl;
    var = 200;
}

void otros_calculos(void)
{
    float res_serie = 0;
    float vol_esf = 0;
    const float r = 12;
    float raiz1 = 0;
    float raiz2 = 0;
    float imp_Z0 = 0;
    const float Rs = 5, Gs = 0.0045, Cs = 0.00000000124, Ls = 0.00000458;
    const float w1 = 2*pi*10000;
    float Bf, a = 1.143, b = 1.42, c = 0.4;
    const float w2 = 2*pi*10000*5000000000000;
    const float mu = 0.00000125664;
    const float epsi = 0.00000000000088542;
    const float betacero = w2*sqrt(mu*epsi);



    /* Serie simple (1/[(x^2) + (x+1)]) para x entre 1 y 199*/
    for(int x=1; x<200; x++)
        res_serie += 1/(x*x+x+1); //Agregue aqui la formula

    /* Volumen de la esfera */
      vol_esf = 4/3*pi*r*r*r; //Agregue aqui la formula

    /* Raices de la ecuacion (3*x^2) + (5*x) + 8  = 0 */
      raiz1 = (-5+sqrt(5*5-4*3*8))/(2*3); //Agregue aqui la formula
      raiz2 = (-5-sqrt(5*5-4*3*8))/(2*3);

    /* Impedancia tipica de una linea de transmision
     * Z0 = [(R+wL)/(G+wC)]^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 10kHz */
      imp_Z0 = sqrt((Rs+w1*Ls)/(Gs+w1*Cs));//Agregue aqui la formula

    /* Constante de fase de una fibra optica
     * B = {[((a^2)-(b^2))*c+(b^2)]^(1/2)}*betacero
     * betacero = w*(mu*epsi)^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 5GHz
     * mu = 0.00000125664
     * epsi = 0.00000000000088542  */
      Bf = sqrt(((a*a)-(b*b))*c+(b*b))*betacero;

}
