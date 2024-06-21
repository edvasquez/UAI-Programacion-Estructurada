//
// Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo 
// sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80
//
#include <iostream>
#include "Ejercicios.h"

#define CAT_NRO1 1
#define CAT_NRO2 2
#define CAT_NRO3 3
#define VALOR_CAT_NRO1 50
#define VALOR_CAT_NRO2 70
#define VALOR_CAT_NRO3 80

void ejercicioNro14()
{
    //Declaracion de variables
    int categoria = 0;
    int horasTrabajadas = 0;
    float totalSueldo = 0;

    //Titulo
    printf("############################################################################################\n");
    printf("# Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo         #\n");
    printf("# sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $70 y la 3 cobra $80 #\n");
    printf("############################################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese la categoria del empleado: ");
    scanf("%d", &categoria);
    printf("Ingrese las horas trabajadas del empleado: ");
    scanf("%d", &horasTrabajadas);

    //Validacion
    if(horasTrabajadas >= 0){
        //Calculos
        switch(categoria){
            case CAT_NRO1 : {
                totalSueldo = horasTrabajadas * VALOR_CAT_NRO1;
                break;
            }
            case CAT_NRO2 : {
                totalSueldo = horasTrabajadas * VALOR_CAT_NRO2;
                break;
            }
            case CAT_NRO3 : {
                totalSueldo = horasTrabajadas * VALOR_CAT_NRO3; 
                break;
            }
            default : {
                printf("\n");
                printf("La categoria ingresada no es valida \n");
                break;
            }
        };
    
        //Salida de resultados
        if(totalSueldo > 0){
            printf("\n");
            printf("Sueldo a percibir: $%0.2f \n", totalSueldo);
        }
    }else{
        printf("\n");
        printf("Las horas trabajadas ingresadas no son validas \n");
    }
    
    //system("pause");
}
