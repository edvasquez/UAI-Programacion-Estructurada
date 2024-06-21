#include <iostream>
#include "Ejercicios.h"

void intercambio_valores(int *primerValor, int *segundoValor);

void ejercicioNro2(void)
{
    //Declaracion de variables
    int primerValor = 0;
    int segundoValor = 0;
    
    //Titulo
    system("color 3f");
    printf("#####################################################\n");
    printf("# Escribir una función que intercambie los valores  #\n");
    printf("# de dos variables enteras utilizando punteros.     #\n");
    printf("#####################################################\n\n");

    //Ingreso de datos
    printf("Ingrese primer valor: ");
    fflush(stdin);
    scanf("%d", &primerValor);
    printf("Ingrese segundo valor: ");
    fflush(stdin);
    scanf("%d", &segundoValor);

    // Calculos
    intercambio_valores(&primerValor, &segundoValor);

    //salida de resultados
    printf("\n\n");
    printf("Despues del intercambio \n");
    printf("Primer valor: %d \n", primerValor);
    printf("Segundo valor: %d \n", segundoValor);
}

void intercambio_valores(int *primerValor, int *segundoValor)
{
     int aux = *primerValor;
     *primerValor = *segundoValor;
     *segundoValor = aux;
}
