#include <iostream>
#include "Ejercicios.h"

void ejercicioNro1()
{
    //Declaracion de variables
    int Suma = 0;
    int Valor1 = 0;
    int Valor2 = 0;
    
    //Titulo
    printf("Sumar dos numeros \n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor a sumar: ");
    scanf("%d", &Valor1);
    printf("Ingrese segundo valor a sumar: ");
    scanf("%d", &Valor2);

    //Calculos
    Suma = Valor1 + Valor2;

    //Salida de resultados
    printf("\n\n");
    printf("El resultado de la suma es: %d \n", Suma);

    //system("pause");
}
