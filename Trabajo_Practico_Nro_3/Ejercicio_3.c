//
// Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general,
// sacar el promedio de lo valores pares y el promedio de los valores impares.
// Luego mostrar por pantalla cuantos números superaron el valor 15.
//
#include <iostream>
#include <math.h>
#include "Ejercicios.h"

#define CANTIDAD 8
#define NIVEL 15
#define DIVISOR(y) ((y) == 0?1:y)
#define PROMEDIO(x,y) (float)((x)/DIVISOR(y))


void ejercicioNro3()
{
    //Declaracion de variables
    float valor = 0;
    int cantPares = 0;
    int cantInpares = 0;
    float sumaPares = 0;
    float sumaImpares = 0;
    int cantMayorNivel = 0;
    
    //Titulo
    system("color 3f");
    printf("#################################################################################\n");
    printf("# Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, #\n");
    printf("# sacar el promedio de lo valores pares y el promedio de los valores impares.   #\n");
    printf("# Luego mostrar por pantalla cuantos números superaron el valor 15.             #\n");
    printf("#################################################################################\n\n");

    //Ingreso de datos
    for(int i=0; i < CANTIDAD; i++){
      if (i == 0) printf("%d: Ingrese un valor: ", i+1);
      else printf("%d: Ingrese el proximo valor: ", i+1);
      fflush(stdin);
      scanf("%f", &valor);

      // Calculos
      if(fmod(valor, 2) == 0){
        cantPares++;
        sumaPares += valor;
      }else{
        cantInpares++;
        sumaImpares += valor;
      };
      
      if(valor > NIVEL){
        cantMayorNivel++;
      };
    };

    //salida de resultados
    printf("\n");
    printf("Promedio general: %0.2f \n", PROMEDIO((sumaPares + sumaImpares), CANTIDAD));
    printf("Promedio de los valores pares: %0.2f \n", PROMEDIO(sumaPares, cantPares));
    printf("Promedio de los valores impares: %0.2f \n", PROMEDIO(sumaImpares, cantInpares));
    printf("Cantidad de numeros mayores a %d: %d \n\n", NIVEL, cantMayorNivel);
}
