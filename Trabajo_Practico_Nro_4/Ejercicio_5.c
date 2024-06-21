//
// Ingresar temperaturas hasta una temperatura igual a 1000, 
// indicar e imprmir la mayor y menor
//

#include <iostream>
#include "Ejercicios.h"

void ejercicioNro5()
{
    //Declaracion de variables
    float temp = 0;
    float tempMax = 0;
    float tempMin = 0;
    bool registro = false;

    
    //Titulo
    system("color 3f");
    printf("#############################################################\n");
    printf("# Ingresar temperaturas hasta una temperatura igual a 1000, #\n");
    printf("# indicar e imprmir la mayor y menor                        #\n");
    printf("#############################################################\n\n");

    //Ingreso de datos
    while(temp != 1000){
      if (!registro){
        printf("Ingrese Temperatura en celsius: ");
      }else{
        printf("Ingrese proxima Temperatura en celsius: ");
      };
      fflush(stdin);
      scanf("%f", &temp);
      if(temp == 1000) continue;
      
      // Calculos
      registro = true;
      if(temp > tempMax){
        tempMax = temp;
      };  
      if(temp < tempMin){
        tempMin = temp;
      };
    };

    //salida de resultados
    printf("\n\n");
    if(registro){ 
      printf("Temperatura maxima registrada: %0.2f \n", tempMax);
      printf("Temperatura minima registrada: %0.2f \n", tempMin);
    }else{
      printf("No se registro temperaturas \n");
    };
}
