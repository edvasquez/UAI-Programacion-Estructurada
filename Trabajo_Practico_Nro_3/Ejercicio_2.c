//
// Ingresar 10 valores, indicar e imprimir cuántos son positivos,
// cuántos negativos y cuántos ceros
//
#include <iostream>
#include "Ejercicios.h"

#define CANTIDAD 10

void ejercicioNro2()
{
    //Declaracion de variables
    float valor = 0;
    int cantPositivos = 0;
    int cantNegativos = 0;
    int cantCeros = 0;

    //Titulo
    system("color 3f");
    printf("##################################################################\n");
    printf("# Ingresar 10 valores, indicar e imprimir cuántos son positivos, #\n");
    printf("# cuántos negativos y cuántos ceros.                             #\n");
    printf("##################################################################\n\n");

    //Ingreso de datos
    for(int i=0; i < CANTIDAD; i++){
      if (i == 0) printf("%d: Ingrese un valor: ", i+1);
      else printf("%d: Ingrese el proximo valor: ", i+1);
      fflush(stdin);
      scanf("%f", &valor);

      //Calculos
      if(valor > 0){
        cantPositivos++;
      }else if(valor < 0){
        cantNegativos++;      
      }else{
        cantCeros++;     
      }
    };

    //salida de resultados
    printf("\n");
    printf("Cantidad de numeros positivos: %d \n", cantPositivos);
    printf("Cantidad de numeros negativos: %d \n", cantNegativos);
    printf("Cantidad de numeros cero: %d \n", cantCeros);
}
