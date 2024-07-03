#include <iostream>
#include "Ejercicios.h"

#define LENGHT 10

void ejercicioNro6()
{
    //Declaracion de variables
    int list[LENGHT];
    int total = 0;

    //Titulo
    system("color 3f");
    printf("###########################################################\n");
    printf("# Ingrese 10 valores en un vector de enteros.             #\n");
    printf("# Sume todos los valores muestre el resultado en pantalla #\n");
    printf("###########################################################\n\n");

    //Ingreso de Datos
    
    for(int i = 0; i < LENGHT; i++){
      fflush(stdin);
      printf("Ingrese valor: ");     
      scanf("%d", &list[i]);
    }
    
    //Calculos
    for(int i = 0; i < LENGHT; i++){
      total += list[i];
    };

    //salida de resultados
    printf("\n\n");
    printf("Total suma: %d \n", total);
    printf("\n");
}
