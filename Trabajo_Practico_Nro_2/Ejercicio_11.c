//
// Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro11()
{
    //Declaracion de variables
    float valor1 = 0;
    float valor2 = 0;
    float valor3 = 0;
    float valor4 = 0;
    float suma1er2do = 0;
    float suma3er4to = 0;

    //Titulo
    printf("#####################################################################\n");
    printf("# Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to,  #\n");
    printf("# indicar e imprimir cuál de estas sumas es mayor.                  #\n");
    printf("#####################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &valor3);
    printf("Ingrese el cuarto valor: ");
    scanf("%f", &valor4);

    //Calculos
    suma1er2do = valor1 + valor2;
    suma3er4to = valor3 + valor4;
    
    //Evaluacion y salida de resultados
    printf("\n");

    if(suma1er2do > suma3er4to){
       printf("La suma del 1ro y 2do valor: %0.2f es mayor a la suma del 3er y 4to valor: %0.2f \n", suma1er2do, suma3er4to);
    }else if(suma3er4to > suma1er2do){
        printf("La suma del 3er y 4to valor: %0.2f es mayor a la suma del 1ro y 2do valor: %0.2f \n", suma3er4to, suma1er2do);
    }else{
        printf("La suma del 1ro y 2do valor: %0.2f es igual a la suma del 3er y 4to valor: %0.2f \n", suma1er2do, suma3er4to); 
    };
    
    //system("pause");
}
