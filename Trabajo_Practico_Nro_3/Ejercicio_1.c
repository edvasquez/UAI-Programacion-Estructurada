//
// Ingresar 25 números, calcular su promedio e imprimirlo
//
#include <iostream>
#include "Ejercicios.h"

#define CANTIDAD 25

void ejercicioNro1()
{
    //Declaracion de variables
    float valor = 0;
    float suma = 0;

    //Titulo
    system("color 3f");
    printf("###########################################################\n");
    printf("# Ingresar 25 números, calcular su promedio e imprimirlo. #\n");
    printf("###########################################################\n\n");

    //Ingreso de datos
    for(int i=0; i < CANTIDAD; i++){
      if (i == 0) printf("%d: Ingrese un valor: ", i+1);
      else printf("%d: Ingrese el proximo valor: ", i+1);
      fflush(stdin);
      scanf("%f", &valor);
      
      //Calculos
      suma += valor;
    };

    //salida de resultados
    printf("\n");
    printf("El promedio de los valores ingresados: %0.2f \n", (float)(suma/CANTIDAD));
}
