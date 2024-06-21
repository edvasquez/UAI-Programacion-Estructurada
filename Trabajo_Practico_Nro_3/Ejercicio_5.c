//
// Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir 
// cuántos montos superan los $40 y del total cobrado que porcentaje 
// representa la suma de los que superan los $40
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Ejercicios.h"

#define LIMITEAUTOS 50
#define MONTOCORTE 40
//Calculos auxiliares
#define ESLETRAMAYUSCULA(c) (65 <= (c) && (c) <= 90)
#define DIVISOR(y) ((y) == 0?1:y)
#define PORCENTAJE(x, y) (float)(((x) * 100)/DIVISOR(y))


void ejercicioNro5()
{
    //Declaracion de variables
    float montoMulta = 0;
    int cantMontoCorte = 0;
    float totalMonto = 0;
    float totalMontoCorte = 0;
    char patente[7];
    int cantAutos = 0;
    bool patenteValida = false;
    bool montoValido = false;
    
    //Titulo
    system("color 3f");
    printf("###########################################################################\n");
    printf("# Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir #\n");
    printf("# cuántos montos superan los $40 y del total cobrado que porcentaje       #\n");
    printf("# representa la suma de los que superan los $40.                          #\n");
    printf("#                                                                         #\n");
    printf("# Formato de las patentes: LLNNNLL o LLLNNN   donde  L=letra  N=numero    #\n");
    printf("# Ejemplo: AB123CD || ABC153                                              #\n");
    printf("###########################################################################\n");

    //Ingreso de datos y limpieza de datos por cada iteracion
    do{
      printf("\n");
      patenteValida = false;
      montoValido = false;
      
      if (cantAutos == 0){
        printf("%d: Ingrese la patente: ", cantAutos+1);
      }else{
        printf("%d: Ingrese la proxima patente: ", cantAutos+1);
      };
      
      fflush(stdin);
      scanf("%s", &patente);
      printf("%d: Ingrese el monto de la multa: ", cantAutos+1);
      fflush(stdin);
      if(scanf("%f", &montoMulta) == 1 && montoMulta > 0){
          montoValido = true;           
      };

      // Valida las patentes con formato: LLLNNN ej: AAA123 
      for(int j=0; (j<6 && strlen(patente) == 6); j++){
        if(j < 3){
          if(ESLETRAMAYUSCULA(patente[j])){
            patenteValida = true;
          }else{
            patenteValida = false;
          };
        };
        if(3 <= j && j < 6){
          if(isdigit(patente[j]) != 0){
            patenteValida = true;
          }else{
            patenteValida = false;
          };
        };
        if(!patenteValida){
          break;
        };
      };

      // Valida las patentes con formato: LLNNNLL ej: AB123CD 
      for(int j=0; (j<7 && strlen(patente) == 7); j++){
        if(j < 2 || (5 <= j && j < 7)){
          if(ESLETRAMAYUSCULA(patente[j])){
            patenteValida = true;
          }else{
            patenteValida = false;
          };
        };
        if(2 <= j && j < 5){
          if(isdigit(patente[j]) != 0){
            patenteValida = true;
          }else{
            patenteValida = false;
          };
        };
        if(!patenteValida){                
          break;
        };
      };

      // Calculos
      if(patenteValida && montoValido){
        cantAutos++;                
        totalMonto += montoMulta;
        
        if(montoMulta > MONTOCORTE){
          totalMontoCorte += montoMulta;
          cantMontoCorte++;
        };
      }else{
        printf("\n");
        printf("Patente: %s o monto: %0.2f no valido, vuelva a ingresar los datos \n", &patente, montoMulta);
      };

    }while(cantAutos < LIMITEAUTOS);

    //salida de resultados
    printf("\n\n");
    printf("Cantidad de autos ingresados: %d \n", LIMITEAUTOS);
    printf("Monto total de las multas: %0.2f \n", totalMonto);
    printf("Cantidad de multas que superan los $40: %d \n", cantMontoCorte);
    printf("Porcentaje del total de multas cobrados que superan los $40: %0.1f%% \n\n", PORCENTAJE(totalMontoCorte, totalMonto));
}
