//
// Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados
// con más de 5 años de antigüedad
//
#include <iostream>
#include "Ejercicios.h"

#define CAT_NRO1 1
#define PREMIO 50
#define ANT_5_ANIOS 5

void ejercicioNro13()
{
    //Declaracion de variables
    float sueldo = 0;
    int categoria = 0;
    int antiguedad = 0;
    float totalSueldo = 0;

    //Titulo
    printf("################################################################################\n");
    printf("# Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados #\n");
    printf("# con más de 5 años de antigüedad                                              #\n");
    printf("################################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese la categoria del empleado: ");
    scanf("%d", &categoria);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &sueldo);
    printf("Ingrese la antiguedad del empleado: ");
    scanf("%d", &antiguedad);
    printf("\n");

    //Validacion
    if(categoria > 0 && sueldo >= 0 && antiguedad > 0){
        //Calculos
        if(categoria == CAT_NRO1){
            sueldo += (antiguedad * PREMIO); 
        }
        //Salida de resultados
        if(antiguedad >= ANT_5_ANIOS){
            printf("Sueldo a percibir: $%0.2f \n", sueldo);
        }else{
            printf("El sueldo del empledo no se mostrara por que la antiguedad es inferios a 5 anios \n");
        };
    }else{
        printf("Los datos ingresados no son validos \n");
    }
    
    //system("pause");
}
