//
// Ingresar dos valores, indicar e imprimir si son iguales
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro1()
{
    //Declaracion de variables
    int valor1 = 0;
    int valor2 = 0;

    //Titulo
    printf("############################################################\n");
    printf("# Ingresar dos valores, indicar e imprimir si son iguales. #\n");
    printf("############################################################\n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor: ");
    scanf("%d", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%d", &valor2);

    //Evaluacion y salida de resultados
    printf("\n");
    if(valor1 == valor2){
        printf("Los valores ingresados %d y %d son iguales \n", valor1, valor2);
    }else{
        printf("Los valores ingresados %d y %d no son iguales \n", valor1, valor2);
    }

    //system("pause");
}
