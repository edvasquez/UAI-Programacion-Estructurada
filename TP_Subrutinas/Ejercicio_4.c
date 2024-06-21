#include <iostream>
#include <math.h>
#include "Ejercicios.h"

void mcd(int a, int b, int *resultado);


void ejercicioNro4(void)
{
    //Declaracion de variables
    int valor1 = 0;
    int valor2 = 0;
    int resultado = 0;
    
    //Titulo
    system("color 3f");
    printf("##################################################################\n");
    printf("# Escribir una función que calcule el Máximo Común Divisor (MCD) #\n");
    printf("# de dos números utilizando el algoritmo de Euclides.            #\n");
    printf("# Los numeros se pasan por valor y el resultado por referencia.  #\n");
    printf("##################################################################\n\n");

    //Ingreso de datos
    printf("Ingrese primer valor: ");
    fflush(stdin);
    scanf("%d", &valor1);
    printf("Ingrese segundo valor: ");
    fflush(stdin);
    scanf("%d", &valor2);

    // Calculos
    mcd(abs(valor1), abs(valor2), &resultado);

    //salida de resultados
    printf("\n\n");
    printf("El MCD(%d,%d) es: %d \n", valor1, valor2, resultado);
}

void mcd(int a, int b, int *resultado)
{
    int aux = 0;
    
    while(a > 0 && b > 1){
       if(a < b){
         aux = a;
         a = b;
         b = aux;
       }
       a -=b;           
    }
    *resultado = b;
}
