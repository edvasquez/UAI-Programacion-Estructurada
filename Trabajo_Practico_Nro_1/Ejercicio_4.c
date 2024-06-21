#include <iostream>
#include "Ejercicios.h"

void ejercicioNro4()
{
    //Decalracion de variables
    float perimetro = 0;
    float lado1 = 0;
    float lado2 = 0;
    float lado3 = 0;

    //Titulo
    printf("Triangilo: Perimetro \n\n");
    
    // Ingreso de datos
    system("color 3f");
    printf("Ingrese lado 1: ");
    scanf("%f", &lado1);
    printf("Ingrese lado 2: ");
    scanf("%f", &lado2);
    printf("Ingrese lado 3: ");
    scanf("%f", &lado3);

    //Calculos
    perimetro = lado1 + lado2 + lado3;

    //Salida de resultados
    printf("\n\n");
    printf("Perimetro: %0.2f \n", perimetro);

    //system("pause");
}
