#include <stdio.h>
#include <math.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro6()
{
    //Declaracion de variables
    float perimetro = 0;
    float area = 0;
    float diagonal = 0;
    float base = 0;
    float altura = 0;
    
    //Titulo
    printf("Rectangulo: Area, Perimetro y Diagonal principal \n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese la  base: ");
    scanf("%f", &base);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);
    
    //Calculos
    diagonal=sqrt(pow(base, 2) + pow(altura, 2));
    perimetro= (2*base) + (2*altura);
    area= base*altura;
    
    //Salida de resultados
    printf("\n\n");
    printf("Perimetro: %0.3f\n", perimetro);
    printf("Area: %0.3f\n", area);
    printf("Diagonal principal: %0.3f\n", diagonal);
    
    //system("pause");
}
