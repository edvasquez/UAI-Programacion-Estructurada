//
//  Trabajo Practico N° 1
//  main.c
//

#include <stdio.h>
#include <iostream>
#include "Ejercicios.h"


int main(int arg, char** argc){
    //Declaracion de variables
    int ejercicioNro = 1;
    
    //Titulo
    system("cls");
    system("color 3f");
    printf("Trabajo Practico N° 1 \n\n");

    //Ingreso de datos
    printf(" 1-Sumar dos numeros \n");
    printf(" 2-Sumar de a dos operadores \n");
    printf(" 3-Sumar tres numeros \n");
    printf(" 4-triangulo: perimetro \n");
    printf(" 5-triangulo: hipotenusa, perimetro y area \n");
    printf(" 6-rectangulo: diagonal principal, perimetro y area \n");
    printf(" 7-calculadora: suma, multiplicacion y resta \n");
    printf(" 8-Calculo de sueldo: valor hora y horas trabajadas \n");
    printf(" 9-Calculo de sueldo: horas trabajadas \n");
    printf(" 10-Concesionaria: liquidacioin de sueldos \n\n");
        
    printf("Ingrese el numero del ejecicio: ");
    scanf("%d", &ejercicioNro);
    printf("\n");

    //Salida de resultados
    switch(ejercicioNro){
     case 1 : {
        ejercicioNro1();
        break;
     }
     case 2 : {
        ejercicioNro2();
        break;
     }
     case 3 : {
        ejercicioNro3();
        break;
     }
     case 4 : {
        ejercicioNro4();
        break;
     }
     case 5 : {
        ejercicioNro5();
        break;
     }
     case 6 : {
        ejercicioNro6();
        break;
     }
     case 7 : {
        ejercicioNro7();
        break;
     }
     case 8 : {
        ejercicioNro8();
        break;
     }
     case 9 : {
        ejercicioNro9();
        break;
     }
     case 10 : {
        ejercicioNro10();
        break;
     }
     default: {
        printf("Numero de ejercicio incorrecto \n");
        break;
     }
    };
    
    //system("pause");
    return 0;
    
}


