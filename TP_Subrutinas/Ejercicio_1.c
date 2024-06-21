#include <iostream>
#include "Ejercicios.h"

void calcular_paridad(int valor, bool *esPar);

void ejercicioNro1(void)
{
    //Declaracion de variables
    bool esPar = false;
    int valor = 0;
    
    //Titulo
    system("color 3f");
    printf("################################################################\n");
    printf("# Crear una función que determine si un número es par o impar. #\n");
    printf("# El resultado debe ser pasado por referencia                  #\n");
    printf("#                                                              #\n");
    printf("################################################################\n\n");

    //Ingreso de datos
    printf("Ingrese un valor: ");
    fflush(stdin);
    scanf("%d", &valor);

    // Calculos
    calcular_paridad(valor, &esPar);

    //salida de resultados
    printf("\n\n");
    if(esPar){
      printf("El valor: %d es par \n", valor);
    }else{
      printf("El valor: %d es impar \n", valor);
    };
}

void calcular_paridad(int valor, bool *esPar)
{
     *esPar = (valor % 2) == 0;
}
