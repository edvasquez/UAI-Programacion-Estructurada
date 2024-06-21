//
// En una carrera de autos se ingresan el número de auto y su tiempo,
// indicar e imprimir cuál ganó y cúal fue el último
//

#include <iostream>
#include <string>
#include "Ejercicios.h"

#define ESHORA(x) (0 <= (x) && (x) <= 23)
#define ESMINUTO(x) (0 <= (x) && (x) <= 59)
#define ESSEGUNDO(x) (0 <= (x) && (x) <= 59)
#define ESMILISEGUNDO(x) (0 <= (x) && (x) <= 999)

void ejercicioNro6()
{
    //Declaracion de variables
    int autoNro = 0;
    int hora = -1;
    int minuto = -1;
    int segundo = -1;
    int milisegundo = -1;
    long tiempo = 0;
    long tiempoMax = 0;
    long tiempoMin = 86400000; // 24 hs in milisegundos
    char tiempoPrimerLugar [14];
    char tiempoUltimoLugar [14];
    int autoPrimerLugar = 0;
    int autoUltimoLugar = 0;
    bool registro = false;

    //Titulo
    system("color 3f");
    printf("######################################################################\n");
    printf("# En una carrera de autos se ingresan el número de auto y su tiempo, #\n");
    printf("# indicar e imprimir cuál ganó y cúal fue el último                  #\n");
    printf("######################################################################\n\n");

    printf("---------------------------------------------------------------------\n");
    printf("# Para finalizar ingrese un caracter no numerico como numero de auto.\n");
    printf("---------------------------------------------------------------------\n");
    printf("# Formato del tiempo HH:MM:SS.MLS -> Ej 01:25:15.156 \n");
    printf("---------------------------------------------------------------------\n");

    while(true){
      // Ingreso y validacion de datos
      if (!registro){
        printf("\nIngrese auto nro: ");
      }else{
        printf("\nIngrese proximo auto nro: ");
      };
      while ((getchar()) != '\n'); // clean buffer
      if(scanf("%d", &autoNro) != 1) break;
      if(autoNro < 0){
        printf("Nro de auto incorrecto, vuelva a ingresar los datos\n");
        continue;
      };

      while ((getchar()) != '\n');
      printf("Ingrese el tiempo HH:MM:SS.MLS: ");
      scanf("%02d:%02d:%02d.%03d", &hora, &minuto, &segundo, &milisegundo);
      if(!ESHORA(hora) || !ESMINUTO(minuto) || !ESSEGUNDO(segundo) || !ESMILISEGUNDO(milisegundo)){
        printf("Tiempo incorrecto, vuelva a ingresar los datos\n");
        continue;
      };
      
      // Calculos
      registro = true;
      //pasasmos a milisegundos para facilitar la comparacion
      tiempo = (hora * 3600000) + (minuto * 60000) + (segundo * 1000) + milisegundo;
      
      if(tiempo < tiempoMin){
        tiempoMin = tiempo;
        sprintf(tiempoPrimerLugar, "%02d:%02d:%02d.%03d", hora, minuto, segundo, milisegundo);
        autoPrimerLugar = autoNro;
      };
      if(tiempo > tiempoMax){
        tiempoMax = tiempo;
        sprintf(tiempoUltimoLugar, "%02d:%02d:%02d.%03d", hora, minuto, segundo, milisegundo);
        autoUltimoLugar = autoNro;
      };
    };

    // salida de resultados
    printf("\n\n");
    while ((getchar()) != '\n'); // clean buffer
    if(registro){ 
      printf("Primer lugar auto nro: %d  tiempo: %s \n", autoPrimerLugar, tiempoPrimerLugar);
      printf("Ultimo lugar auto nro: %d  tiempo: %s \n", autoUltimoLugar, tiempoUltimoLugar);
    }else{
      printf("No se registro autos \n");
    };
}
