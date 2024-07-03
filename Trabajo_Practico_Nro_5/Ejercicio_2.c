#include <iostream>
#include "Ejercicios.h"

void ejercicioNro2()
{
    //Declaracion de variables
    int length = 0;
    int list[10];

    //Titulo
    system("color 3f");
    printf("###############################################################\n");
    printf("# Cree un vector de 10 posiciones, pida al usuario que        #\n");
    printf("# ingrese los 10 valores y luego muéstrelo de manera inversa. #\n");
    printf("###############################################################\n\n");

    //Ingreso de Datos
    length = sizeof(list) / sizeof(list[0]);
    
    for(int i = 0; i < length; i++){
      fflush(stdin);
      printf("Ingrese valor: ");     
      scanf("%d", &list[i]);
    }

    //salida de resultados
    printf("\n\n");
    printf("Imprecion inversa: \n");
    for(int i = 0; i < length; i++){
      printf("Elemento[%d]: %d \n", (length-i), list[length - (i+1)]);
    };
    printf("\n");
}
