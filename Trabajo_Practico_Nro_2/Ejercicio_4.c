//
// Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor.
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro4()
{
    //Declaracion de variables
    float valor1 = 0;
    float valor2 = 0;

    //Titulo
    printf("#################################################################################\n");
    printf("# Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor. #\n");
    printf("#################################################################################\n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%f", &valor2);

    //Evaluacion y salida de resultados
    printf("\n");
    if(valor1 > valor2){
        printf("El primer valor: %0.2f en mayor al segundo: %0.2f, su resta es: %0.2f \n", valor1, valor2, (valor1 - valor2));
    }
    if(valor2 > valor1){
        printf("El segundo valor: %0.2f en mayor al primero: %0.2f, su resta es: %0.2f \n", valor2, valor1, (valor2 - valor1));
    }

    //system("pause");
}
