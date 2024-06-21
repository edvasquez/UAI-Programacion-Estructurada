#include <stdio.h>
#include <math.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro7()
{
    //Declaracion de variables
    float primerNumero = 0;
    float segundoNumero = 0;
    float suma = 0;
    float multiplicacion = 0;
    float resta = 0;
    
    //Titulo
    printf("Calculadora: Suma, Multiplicacion y Resta \n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer numero: ");
    scanf("%f", &primerNumero);
    printf("Ingrese segundo numero: ");
    scanf("%f", &segundoNumero);
    
    //Calculos
    suma = primerNumero + segundoNumero;
    multiplicacion = primerNumero * segundoNumero;
    resta = primerNumero - segundoNumero;
    
    //Salida de resultados
    printf("\n\n");
    printf("Suma: %0.3f\n", suma);
    printf("Multiplicacion: %0.3f\n", multiplicacion);
    printf("Resta: %0.3f\n", resta);
    
    //system("pause");
}
