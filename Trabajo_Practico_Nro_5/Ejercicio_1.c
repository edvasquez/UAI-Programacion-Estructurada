#include <iostream>
#include "Ejercicios.h"

void ejercicioNro1()
{
    //Declaracion de variables
    int length = 0;
    int list[5] = {10,100,94,84,11};

    //Titulo
    system("color 3f");
    printf("########################################################\n");
    printf("# Cree un vector de enteros de 5 posiciones,           #\n");
    printf("# inicializándolo con los valores del 10,100,94,84,11. #\n");
    printf("########################################################\n\n");

    length = sizeof(list) / sizeof(list[0]);
    //salida de resultados
    printf("\n\n");
    for(int i = 0; i < length; i++){
      printf("Elemento[%d]: %d \n", i+1, list[i]);
    };
    printf("\n");
}
