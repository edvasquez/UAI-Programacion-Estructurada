#include <stdio.h>
#include <math.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro5()
{
    // Declaracion de variables
    float perimetro = 0;
    float area = 0;
    float hipotenusa = 0;
    float base = 0;
    float altura = 0;

    //Titulo
    printf("Triangilo Rectangulo: Hipotenusa, Area y Perimetro \n\n");

    // Ingreso de datos
    system("color 3f");
    printf("Ingrese la  base: ");
    scanf("%f", &base);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    // Calculos
    hipotenusa=sqrt(pow(base, 2) + pow(altura, 2));
    perimetro=base + altura + hipotenusa;
    area=(base*altura)/2;

    // Salida de resultados
    printf("\n\n");
    printf("Perimetro: %0.3f\n", perimetro);
    printf("Area: %0.3f\n", area);
    printf("Hipotenusa: %0.3f\n", hipotenusa);

    //system("pause");
}
