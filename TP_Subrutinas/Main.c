//
//  Trabajo Practico Subrutinas
//  Main.c
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Ejercicios.h"

enum menu{Salida, Inicio, Fin = 5};

int main(int arg, char** argc)
{
    //Declaracion de variables
    int numero = 1;
    void (*ptr_ejercicio[5])(void) = {ejercicioNro1, ejercicioNro2, 
                                   ejercicioNro3, ejercicioNro4, ejercicioNro5};

                             
    system("cls");
    system("color 3f");

    //Ingreso de datos
    while(numero != 0){
        system("cls");
        fflush(stdin);
        numero = 0;
        printf("#################################\n");
        printf("## Trabajo Practico Subrutinas ##\n");
        printf("##            MENU             ##\n");
        printf("#################################\n\n");
        
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
          
          printf("\n");
          system("pause");
        };
    };

    return 0;
}
