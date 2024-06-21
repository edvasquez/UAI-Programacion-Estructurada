#include <stdio.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro9()
{
    // Declaracion de variables
    double Sueldo = 0;
    double static ValorHora = 10;
    double HorasTrabajadas = 0;
    
    //Titulo
    system("color 3f");
    printf("Calculo de sueldo: tiempo trabajado \n\n");

    // Ingreso de datos
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%lf", &HorasTrabajadas);

    //Calculos
    Sueldo = ValorHora * HorasTrabajadas;

    // Salida de resultados
    printf("\n\n");
    printf("El sueldo a cobrar es: $%0.2lf \n", Sueldo);

    //system("pause");
}
