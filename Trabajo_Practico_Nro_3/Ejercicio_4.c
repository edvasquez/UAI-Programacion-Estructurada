//
// Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20,
// cuantos entre 20 y 30 y cuantos son mas de 30.
// Luego mostrar el porcentaje de cada grupo en el total.
//

#include <iostream>
#include <math.h>
#include "Ejercicios.h"

#define CANTIDAD 30
#define NIVEL_BAJO 1
#define NIVEL_MEDIO 10
#define NIVEL_ALTO 20
#define NIVEL_SUPERIOR 30
#define PORCENTAJE(x) (float)((x * 100)/CANTIDAD)

void ejercicioNro4()
{
    //Declaracion de variables
    float valor = 0;
    int cantBajoMedio = 0;
    int cantMedioAlto = 0;
    int cantAltoSuperior = 0;
    int cantSuperior = 0;
    
    //Titulo
    system("color 3f");
    printf("##################################################################################\n");
    printf("# Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, #\n");
    printf("# cuantos entre 20 y 30 y cuantos son mas de 30.                                 #\n");
    printf("# Luego mostrar el porcentaje de cada grupo en el total.                         #\n");
    printf("##################################################################################\n\n");

    //Ingreso de datos
    for(int i=0; i < CANTIDAD; i++){
      if (i == 0) printf("%d: Ingrese un valor: ", i+1);
      else printf("%d: Ingrese el proximo valor: ", i+1);
      fflush(stdin);
      scanf("%f", &valor);

      // Calculos
      if(NIVEL_BAJO <= valor && valor <= NIVEL_MEDIO){
        cantBajoMedio++;
      };
      if(NIVEL_MEDIO < valor && valor <= NIVEL_ALTO){
        cantMedioAlto++;
      };
      if(NIVEL_ALTO < valor && valor <= NIVEL_SUPERIOR){
        cantAltoSuperior++;
      };
      if(NIVEL_SUPERIOR < valor){
        cantSuperior++;
      }
    };

    //salida de resultados
    printf("\n");
    printf("Porcentaje de valores entre %d y %d: %0.1f%% \n", NIVEL_BAJO, NIVEL_MEDIO, PORCENTAJE(cantBajoMedio));
    printf("Porcentaje de valores entre %d y %d: %0.1f%% \n", NIVEL_MEDIO, NIVEL_ALTO, PORCENTAJE(cantMedioAlto));
    printf("Porcentaje de valores entre %d y %d: %0.1f%% \n", NIVEL_ALTO, NIVEL_SUPERIOR, PORCENTAJE(cantAltoSuperior));
    printf("Porcentaje de valores mayores a %d: %0.1f%% \n\n", NIVEL_SUPERIOR, PORCENTAJE(cantSuperior));
}
