//
//  Trabajo Practico Nro 3
//  Main.c
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Ejercicios.h"

int main(int arg, char** argc)
{
    //Declaracion de variables
    int ejercicioNro = 1;

    
    //Titulo
    system("cls");
    system("color 3f");

    //Ingreso de datos
    while(ejercicioNro != 0){
        system("cls");
        fflush(stdin);
        printf("############################\n");
        printf("## Trabajo Practico Nro 3 ##\n");
        printf("##          MENU          ##\n");
        printf("############################ \n\n");
        printf(" 0 - Cero para finalizar \n");
        printf(" 1 - Ejercicio Nro 1 \n");
        printf(" 2 - Ejercicio Nro 2 \n");
        printf(" 3 - Ejercicio Nro 3 \n");
        printf(" 4 - Ejercicio Nro 4 \n");
        printf(" 5 - Ejercicio Nro 5 \n\n");
            
        printf("Ingrese el numero del ejecicio: ");
        scanf("%d", &ejercicioNro);
        printf("\n");

        //Salida de resultados
        switch(ejercicioNro){
         case 1 : {
            system("cls");
            ejercicioNro1();
            break;
         }
         case 2 : {
            system("cls");
            ejercicioNro2();
            break;
         }
         case 3 : {
            system("cls");
            ejercicioNro3();
            break;
         }
         case 4 : {
            system("cls");
            ejercicioNro4();
            break;
         }
         case 5 : {
            system("cls");
            ejercicioNro5();
            break;
         }
         default: {
            system("cls");
            break;
         }
        };
        system("pause");
    };

    return 0;
}
