#include <iostream>
#include <math.h>
#include "Ejercicios.h"

float potencia(float base, float exponente);

void ejercicioNro3(void)
{
    //Declaracion de variables
    float base = 0;
    float exponente = 0;
    float resultado = 0;
    
    //Titulo
    system("color 3f");
    printf("#################################################################\n");
    printf("# Crear una función que reciba un número base y un exponente,   #\n");
    printf("# y devuelva el resultado de elevar el número base al exponente #\n");
    printf("# utilizando parámetros por valor.                              #\n");
    printf("#################################################################\n\n");

    //Ingreso de datos
    printf("Ingrese numero: ");
    fflush(stdin);
    scanf("%f", &base);
    printf("Ingrese exponente: ");
    fflush(stdin);
    scanf("%f", &exponente);

    // Calculos
    resultado = potencia(base, exponente);

    //salida de resultados
    printf("\n\n");
    printf("E numero %0.2f elevado a la potencia %0.2f es: %0.2f \n", base, exponente, resultado);
}

float potencia(float base, float exponente)
{
    return pow(base, exponente);
}
