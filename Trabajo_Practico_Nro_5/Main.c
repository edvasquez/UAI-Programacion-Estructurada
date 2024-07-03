//
//  Trabajo Practico Nro 5
//  Main.c
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Ejercicios.h"

#define LENGTH 8

enum menu{Salida, Inicio, Fin = 8};

int main(int arg, char** argc)
{
    //Declaracion de variables
    int numero = 1;
    void (*ptr_ejercicio[LENGTH])(void) = {ejercicioNro1, ejercicioNro2,
                                     ejercicioNro3, ejercicioNro4,
                                     ejercicioNro5, ejercicioNro6,
                                     ejercicioNro7, ejercicioNro8};
                             
    system("cls");
    system("color 3f");

    //Ingreso de datos
    while(numero != 0){
        system("cls");
        fflush(stdin);
        numero = 0;
        printf("############################\n");
        printf("## Trabajo Practico Nro 5 ##\n");
        printf("##          MENU          ##\n");
        printf("############################ \n\n");
        
        printf(" %d -> Cero para finalizar \n", Salida);
        for(int i = Inicio; i <= Fin; i++ ){
          printf(" %d -> Ejercicio Nro %d \n", i, i);      
        }
        printf("\n");

        printf("Ingrese el numero del ejecicio: ");
        scanf("%d", &numero);
        
        if(Inicio <= numero && numero <= Fin){
          printf("\n");
          //Salida de resultados
          system("cls");
          ptr_ejercicio[numero - 1]();
          system("pause");
        };
    };

    return 0;
}
