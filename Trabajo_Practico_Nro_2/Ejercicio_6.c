//
// Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro6()
{
    //Declaracion de variables
    int edad1ro = 0;
    float altura1ro = 0;
    int edad2do = 0;
    float altura2do = 0;

    //Titulo
    printf("######################################################\n");
    printf("# Ingresar la edad y la altura de dos personas,      #\n");
    printf("# indicar e imprimir la estatura del de mayor edad.  #\n");
    printf("######################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese la edad(años) de la 1er persona: ");
    scanf("%d", &edad1ro);
    printf("Ingrese la altura(metros) de la 1er perosona : ");
    scanf("%f", &altura1ro);
    printf("Ingrese la edad(años) de la 2da persona: ");
    scanf("%d", &edad2do);
    printf("Ingrese la altura(metros) de la 2da persona: ");
    scanf("%f", &altura2do);
    
    //Evaluacion y salida de resultados
    printf("\n");
    if(edad1ro > edad2do){
       printf("La prmer persona ingresada cuya edad: %d y altura: %0.2f es mayor a la segunada \n", edad1ro, altura1ro);
    }else if(edad2do > edad1ro){
        printf("La segunda persona ingresada cuya edad: %d y altura: %0.2f es mayor a la primera \n", edad2do, altura2do);
    }else{
        printf("La edad de las dos personas son iguales, edad: %d \n", edad1ro); 
    };
    
    //system("pause");
}
