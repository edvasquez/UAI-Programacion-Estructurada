#include <stdio.h>
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro10()
{
    // Declaracion de variables
    double static sueldoBase = 500;
    double static comisionPorVolumenVenta = 50;
    double static comisionPorVehiculo = 0.1; // 10%
    double cantidadVehiculos = 0;
    double precioVehiculo = 0;
    double totalVolumenVenta = 0;
    double totalComicionVehiculo = 0;
    double Sueldo = 0;

    
    //Titulo
    system("color 3f");
    printf("Concesionaria, liquidacion de sueldo: Cantidad de vehiculos y precio \n\n");

    //Ingreso de datos
    printf("Ingrese la cantidad de vehiculos vendidos: ");
    scanf("%lf", &cantidadVehiculos);
    printf("Ingrese el precio del vehiculo: ");
    scanf("%lf", &precioVehiculo);

    //Calculos
    totalComicionVehiculo = cantidadVehiculos * precioVehiculo * comisionPorVehiculo;
    totalVolumenVenta = cantidadVehiculos * comisionPorVolumenVenta;
    Sueldo = sueldoBase + totalComicionVehiculo + totalVolumenVenta;

    //Salida de resultados
    printf("\n\n");
    printf("El sueldo a cobrar es: $%0.2lf \n", Sueldo);

    //system("pause");
}
