#include <stdio.h>
#include "funciones.h"
#include <math.h>
float ingresarCoordenadaX()
{
float x;
printf("Ingrese la coordena x");
scanf("%f",&x);
return x;
}

float ingresarCoordenadaY()
{
float y;
printf("Ingrese la coordena y");
scanf("%f",&y);
return y;
}

float obtenerBaricentroX(float x1, float x2, float x3)
{
    float bx= (x1+x2+x3)/3;
    return bx;
}
float calcularRadio(float x1, float x2, float x3, float y1, float y2, float y3, float bx, float by)
{
    float distancia1 = sqrt(pow((bx - x1), 2) + pow((by - y1), 2));
    float distancia2 = sqrt(pow((bx - x2), 2) + pow((by - y2), 2));
    float distancia3 = sqrt(pow((bx - x3), 2) + pow((by - y3), 2));
    if (distancia1 < distancia2 && distancia1 < distancia3)
    {
        return distancia1;
    }
    else if (distancia2 < distancia3 && distancia2 < distancia3)
    {
        return distancia2;
    }
    else if (distancia3 < distancia2 && distancia3 < distancia1)
    {
        return distancia3;
    }
}
void calcularArea(float radio)
{
    float area= 3.14*pow(radio,2);
    printf("El area del circulo es %.2f",area);
}
