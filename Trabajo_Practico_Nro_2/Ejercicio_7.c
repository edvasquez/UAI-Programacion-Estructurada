//
// Ingresar el valor de la hora y el tiempo trabajado por un empleado, 
// calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs 
// y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo
//
#include <iostream>
#include "Ejercicios.h"

#define HORAS_50 50
#define HORAS_150 150
#define PREMIO 100.00

void ejercicioNro7()
{
    //Declaracion de variables
    float valorHora = 0;
    float horasTrabajadas = 0;
    float totalSueldo = 0;

    //Titulo
    printf("#######################################################################################\n");
    printf("# Ingresar el valor de la hora y el tiempo trabajado por un empleado,                 #\n");
    printf("# calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs #\n");
    printf("# y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo.      #\n");
    printf("#######################################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese el valor por hora trabajada: ");
    scanf("%f", &valorHora);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &horasTrabajadas);

    //Calculos
    totalSueldo = valorHora * horasTrabajadas;
    
    //Evaluacion
    printf("\n");
    if(horasTrabajadas >= HORAS_50){
       totalSueldo += PREMIO;
    };
    if(horasTrabajadas >= HORAS_150){
       totalSueldo += PREMIO;
    };
    //Salida de resultados
    printf("Sueldo a percibir: $%0.2f \n", totalSueldo);
    
    //system("pause");
}
