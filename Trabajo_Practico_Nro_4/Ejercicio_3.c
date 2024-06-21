//
// Ingresar N valores, calcular e imprimir el promedio de positivos,
// de negativos y cantidad de ceros.
//
#include <iostream>
#include <math.h>
#include "Ejercicios.h"

#define DIVISOR(y) ((y) == 0?1:y)
#define PROMEDIO(x,y) (float) (fabs(x)/DIVISOR(y))

void ejercicioNro3()
{
    //Declaracion de variables
    float numero = 0;
    float sumaPositivos = 0;
    float sumaNegativos = 0;
    int cantPositivos = 0;
    int cantNegativos = 0;
    int cantCeros = 0;

    //Titulo
    system("color 3f");
    printf("########################################################\n");
    printf("# Ingresar N valores, calcular e imprimir el promedio  #\n");
    printf("# de positivos, de negativos y cantidad de ceros.      #\n");
    printf("########################################################\n\n");

    printf("Para finalizar la carga ingrese un caracter no numerico.\n\n");

    //Ingreso de datos
    while(true){
      printf("Ingrese un numero: ");
      fflush(stdin);
      if(scanf("%f", &numero) != 1){
         break;               
      };

      //Calculos
      if(numero > 0){
        sumaPositivos += numero;
        cantPositivos++;
      };
      if(numero < 0){
        sumaNegativos += numero;
        cantNegativos++;      
      };
      if(numero == 0){
        cantCeros++;     
      };

      printf("\n");
    };

    //salida de resultados
    printf("\n");
    printf("Promedio de numeros positivos: %0.2f \n", PROMEDIO(sumaPositivos, cantPositivos));
    printf("Promedio de numeros negativos: %0.2f \n", PROMEDIO(sumaNegativos, cantNegativos));
    printf("Cantidad de numeros cero: %d \n", cantCeros);
}
