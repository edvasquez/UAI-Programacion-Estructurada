//
// Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados
//
#include <iostream>
#include <math.h>
#include "Ejercicios.h"

#define SI 's' 

void ejercicioNro1()
{
    //Declaracion de variables
    float sueldo = 0;
    int cantSueldo = 0;
    float total = 0;

    //Titulo
    system("color 3f");
    printf("#######################################################\n");
    printf("# Ingresar N sueldos e indicar su suma y su promedio, #\n\n");
    printf("# imprimir resultados                                 #\n");
    printf("#                                                     #\n");
    printf("# Los montos negativos se tomaran como positivos      #\n");
    printf("#######################################################\n\n");

    printf("Para finalizar la carga ingrese un monto no numerico.\n\n");

    //Ingreso de datos
    while(true){
      printf("Ingrese el monto del sueldo: ");
      fflush(stdin);
      if(scanf("%f", &sueldo) != 1){
        break;               
      };
      
      //Calculos
      total += fabs(sueldo);
      cantSueldo ++;
      
      printf("\n");
    };

    //salida de resultados
    printf("\n\n");
    printf("Total de sueldos ingresados: %0.2f \n", total);
    printf("Promedio de los sueldos ingresados: %0.2f \n", (float)(total/cantSueldo));
}
