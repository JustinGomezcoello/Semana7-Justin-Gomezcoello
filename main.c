/*Desarrollar un programa que permita obtener el área del circulo cuyo centro es el baricentro
de un triangulo descrito por tres puntos en el plano cartesiano y que pasa por el punto mas
cercano al baricentro.

Las coordenadas de los puntos que conforman el triángulo deberán ser ingresadas por consola y
tendrán las componentes X y Y.

Nota: no se debe modificar el main.   */

#include <stdio.h>
#include "funciones/funciones.h"
#include <math.h>

int main(int argc, char *argv[])
{

    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float bx = obtenerBaricentroX(x1, x2, x3);
    float by = obtenerBaricentroX(y1, y2, y3);

    float radio = calcularRadio(x1, x2, x3, y1, y2, y3, bx, by);

    calcularArea(radio);

    return 0;
}
