//
// Ingresar facturas hasta nro de factura = 0,
// sumar sus importes y cuales y cuantas superan los $1000
// imprimir los resultados
// a) Indicar cuantas superan los $10000
// b) Indicar cuantas estan entre $400 y $700
//
#include <iostream>
#include "Ejercicios.h"

#define FIN 0
#define MINIMO 400
#define MEDIO 700
#define ALTO 1000
#define MAXIMO 10000

void ejercicioNro2()
{
    //Declaracion de variables
    int facturaNro = 1;
    float facturaMonto = 0;
    float totalMonto = 0;
    int cantAlto = 0;
    int cantMaximo = 0;
    int cantEntre = 0;

    //Titulo
    system("color 3f");
    printf("###########################################################\n");
    printf("# Ingresar facturas hasta nro de factura = 0,             #\n");
    printf("# sumar sus importes y cuales y cuantas superan los $1000 #\n");
    printf("# imprimir los resultados                                 #\n");
    printf("# a) Indicar cuantas superan los $10000                   #\n");
    printf("# b) Indicar cuantas estan entre $400 y $700              #\n");
    printf("###########################################################\n\n");

    printf("Un Nro de factura 0 finaliza la carga.\n");
    

    do{
      //Calculos
      totalMonto += facturaMonto;
      if(MINIMO <= facturaMonto && facturaMonto <= MEDIO){
        cantEntre++;
      };
      if(ALTO < facturaMonto){
        cantAlto++;
        printf("La factura supera los $%d \n", ALTO);   
      };
      if(MAXIMO < facturaMonto){
        cantMaximo++;     
      };
      
      //Ingreso de datos y validacion
      printf("\n");
      printf("Ingrese Factura Nro: ");
      fflush(stdin);
      scanf("%d", &facturaNro);
      
      if(facturaNro != FIN){
        printf("Ingrese monto: ");
        fflush(stdin);
        scanf("%f", &facturaMonto);

        if(facturaMonto < 0 || facturaNro < 0){
           printf("Monto o nro factura incorrecto, vuelva a ingresar los datos\n");
           facturaMonto = 0;             
        };
      };
    }while(facturaNro != FIN);

    //salida de resultados
    printf("\n");
    printf("Monto total de las facturas: $%0.2f \n", totalMonto);
    printf("La cantidad de facturas entre $%d y $%d es: %d \n", MINIMO, MEDIO, cantEntre);
    printf("La cantidad de facturas mayores a $%d es: %d \n", ALTO, cantAlto);
    printf("La cantidad de facturas mayores a $%d es: %d \n", MAXIMO, cantMaximo);
}
