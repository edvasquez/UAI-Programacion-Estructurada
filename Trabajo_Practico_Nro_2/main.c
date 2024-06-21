//
//  Trabajo Practico Nro 2
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
        printf("## Trabajo Practico Nro 2 ##\n");
        printf("##          MENU          ##\n");
        printf("############################ \n\n");
        printf(" 0 - Cero para finalizar \n");
        printf(" 1 - Ejercicio Nro 1 \n");
        printf(" 2 - Ejercicio Nro 2 \n");
        printf(" 3 - Ejercicio Nro 3 \n");
        printf(" 4 - Ejercicio Nro 4 \n");
        printf(" 5 - Ejercicio Nro 5 \n");
        printf(" 6 - Ejercicio Nro 6 \n");
        printf(" 7 - Ejercicio Nro 7 \n");
        printf(" 8 - Ejercicio Nro 8 \n\n");
        
        printf(" Ejercicios que figuran fuera del TP  \n\n");
        
        printf(" 10 - Ejercicio Nro 10 \n");
        printf(" 11 - Ejercicio Nro 11 \n");
        printf(" 12 - Ejercicio Nro 12 \n");
        printf(" 13 - Ejercicio Nro 13 \n");
        printf(" 14 - Ejercicio Nro 14 \n\n");
            
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
         case 6 : {
            system("cls");
            ejercicioNro6();
            break;
         }
         case 7 : {
            system("cls");
            ejercicioNro7();
            break;
         }
         case 8 : {
            system("cls");
            ejercicioNro8();
            break;
         }
         case 10 : {
            system("cls");
            ejercicioNro10();
            break;
         }
         case 11 : {
            system("cls");
            ejercicioNro11();
            break;
         }
         case 12 : {
            system("cls");
            ejercicioNro12();
            break;
         }
         case 13 : {
            system("cls");
            ejercicioNro13();
            break;
         }
         case 14 : {
            system("cls");
            ejercicioNro14();
            break;
         }
         default: {
            system("cls");
            break;
         }
        };
        system("pause");
    };
    // printf("Saliendo del sistema... \n");
    // system("pause");
    return 0;
}
