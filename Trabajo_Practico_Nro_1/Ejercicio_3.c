#include <iostream>
#include "Ejercicios.h"

void ejercicioNro3()
{
    //Declaracion de variables
    int suma = 0;
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;

    //Titulo
    printf("Sumar tres numeros \n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor a sumar: ");
    scanf("%d", &valor1);
    printf("Ingrese segundo valor a sumar: ");
    scanf("%d", &valor2);
    printf("Ingrese tercer valor a sumar: ");
    scanf("%d", &valor3);

    //Calculos
    suma = valor1 + valor2 + valor3;

    //Salida de resultados
    printf("\n\n");
    printf("El resultado de la suma es: %d \n", suma);

    //system("pause");
}
