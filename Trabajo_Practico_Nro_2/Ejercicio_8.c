//
// Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida,
// considerar los años bisiestos 
//
#include <iostream>
#include "Ejercicios.h"

// divisores
#define DIV_4 4
#define DIV_100 100
#define DIV_400 400
// meses
#define ENERO 1
#define FEBRERO 2
#define MARZO 3
#define ABRIL 4
#define MAYO 5
#define JUNIO 6
#define JULIO 7
#define AGOSTO 8
#define SEPTIEMBRE 9
#define OCTUBRE 10
#define NOVIEMBRE 11
#define DICIEMBRE 12

void ejercicioNro8()
{
    //Declaracion de variables
    int dia = 0;
    int mes = 0;
    int anio = 0;
    bool bisiesto1 = false;
    bool bisiesto2 = false;
    bool anioBisiesto = false;
    bool mes30Dias = false;
    bool mes31Dias = false;
    bool fechaValida = false;

    //Titulo
    printf("################################################################################################\n");
    printf("# Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida, #\n");
    printf("# considerar los años bisiestos                                                                #\n");
    printf("################################################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese un fecha(DDMMAAAA): ");
    scanf("%2d %2d %4d", &dia, &mes, &anio);
    
    //Validacion
    if(dia > 0 && dia <= 31 && mes > 0 && mes <= 12 && anio > 0){
        //Calculos
        bisiesto1 = (anio % DIV_100) > 0 && (anio % DIV_4) == 0;
        bisiesto2 = (anio % DIV_100) == 0 && (anio % DIV_400) == 0;
        anioBisiesto = bisiesto1 || bisiesto2;
        mes30Dias = mes == ABRIL || mes == JUNIO || mes == SEPTIEMBRE || mes == NOVIEMBRE;
        mes31Dias = mes == ENERO || mes == MARZO || mes == MAYO || mes == JULIO || mes == AGOSTO || mes == OCTUBRE || mes == DICIEMBRE;
        
        //Evaluacion
        if(mes == FEBRERO && dia <= 29 && anioBisiesto){
            fechaValida = true;
        };
        if(mes == FEBRERO && dia <= 28 && !anioBisiesto){
            fechaValida = true;
        };
        if(mes30Dias && dia <= 30){
            fechaValida = true;
        };
        if(mes31Dias && dia <= 31){
            fechaValida = true;
    }};
    
    //Salida de resultados
    printf("\n");
    if(fechaValida){
        printf("La fecha: %02d/%02d/%04d es valida \n", dia, mes, anio);
    }else{
        printf("La fecha: %02d/%02d/%04d no es valida \n", dia, mes, anio);
    }    

    //system("pause");
}
