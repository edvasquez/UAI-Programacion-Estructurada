//
// Ingresar el sueldo, categoría y antigüedad de un empleado,
// calcular el sueldo final de cada uno de ellos, 
// si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad.
//

#include <iostream>
#include "Ejercicios.h"

#define CAT_NRO1 1
#define PREMIO 50

void ejercicioNro12()
{
    //Declaracion de variables
    float sueldo = 0;
    int categoria = 0;
    int antiguedad = 0;
    float totalSueldo = 0;

    //Titulo
    printf("########################################################################################\n");
    printf("# Ingresar el sueldo, categoría y antigüedad de un empleado,                           #\n");
    printf("# calcular el sueldo final de cada uno de ellos,                                       #\n");
    printf("# si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad. #\n");
    printf("########################################################################################\n\n");
    
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
        printf("Sueldo a percibir: $%0.2f \n", sueldo);
    }else{
        printf("Los datos ingresados no son validos \n");
    }
    
    //system("pause");
}
