//
// Ingresar un valor indicar e imprimir si es positivo, negativo o cero
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro2()
{
    //Declaracion de variables
    int valor = 0;
    bool eval = 0;

    //Titulo
    printf("#########################################################################\n");
    printf("# Ingresar un valor indicar e imprimir si es positivo, negativo o cero. #\n");
    printf("#########################################################################\n\n");

    //Ingreso de datos
    system("color 3f");
    printf("Ingrese primer valor: ");
    scanf("%d", &valor);

    //Evaluacion y salida de resultados
    printf("\n");
    if(valor == 0){printf("El valor ingresado es cero \n");};
    if(valor > 0){printf("El valor: %d es positivo \n", valor);};
    if(valor < 0){printf("El valor: %d es negativo \n", valor);};

    //system("pause");
}
