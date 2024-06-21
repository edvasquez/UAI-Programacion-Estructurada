//
// Ingresar dos valores y realizar e imprimir el producto (multiplicación)
// si el 1ro es mayor al 2do, si son iguales solo indicarlo.
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro3()
{
    //Declaracion de variables
    float valor1 = 0;
    float valor2 = 0;

    //Titulo
    printf("###########################################################################\n");
    printf("# Ingresar dos valores y realizar e imprimir el producto (multiplicación) #\n");
    printf("# si el 1ro es mayor al 2do, si son iguales solo indicarlo.               #\n");
    printf("###########################################################################\n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%f", &valor2);

    //Evaluacion y salida de resultados
    printf("\n");
    if(valor1 > valor2){
        printf("El primer valor: %0.2f es mayor al segundo: %0.2f, su producto es: %0.2f \n", valor1, valor2, (valor1 * valor2));
    }else if(valor1 == valor2){
        printf("Los valores ingresados son iguales \n");
    }else{
        printf("Los valores ingresados no cumplen con la definicion de ejercicio \n");
    };

    //system("pause");
}
