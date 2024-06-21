#include <stdio.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro8()
{
    // Declaracion de variables
    int NumEmp = 0;
    double Sueldo = 0;
    double ValorHora = 0;
    double HorasTrabajadas = 0;
    
    //Titulo
    system("color 3f");
    printf("Calculo de sueldo: valor de la Hora y tiempo trabajado \n\n");

    // Ingreso de datos
    printf("Ingrese el valor de la hora: ");
    scanf("%lf", &ValorHora);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%lf", &HorasTrabajadas);

    //Calculos
    Sueldo = ValorHora * HorasTrabajadas;

    // Salida de resultados
    printf("\n\n");
    printf("El sueldo a cobrar es: $%0.2lf \n", Sueldo);

    //system("pause");
}
