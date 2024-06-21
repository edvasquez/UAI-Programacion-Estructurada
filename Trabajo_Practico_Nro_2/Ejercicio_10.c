//
// Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos valores es mayor al promedio
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro10()
{
    //Declaracion de variables
    float valor1 = 0;
    float valor2 = 0;
    float valor3 = 0;
    float suma = 0;
    float promedio = 0;

    //Titulo
    printf("##############################################################################\n");
    printf("# Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir #\n");
    printf("# cuál de estos valores es mayor al promedio.                                #\n");
    printf("##############################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &valor3);

    //Calculos
    suma = valor1 + valor2 + valor3;
    promedio = suma / 3;
    
    //Evaluacion y salida de resultados
    printf("\n");
    printf("Suma: %0.2f y Promedio: %0.2f \n", suma, promedio);
    if(valor1 > promedio){
       printf("El valor; %0.2f es mayor al promedio: %0.2f \n", valor1, promedio);
    };
    if(valor2 > promedio){
       printf("El valor; %0.2f es mayor al promedio: %0.2f \n", valor2, promedio);
    };
    if(valor3 > promedio){
       printf("El valor; %0.2f es mayor al promedio: %0.2f \n", valor3, promedio);
    };
    
    //system("pause");
}
