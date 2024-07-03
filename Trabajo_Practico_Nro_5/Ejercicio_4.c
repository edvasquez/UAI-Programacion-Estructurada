#include <iostream>
#include "Ejercicios.h"

#define LENGHT 12

void ejercicioNro4()
{
    //Declaracion de variables
    char string[LENGHT];

    //Titulo
    system("color 3f");
    printf("#############################################################\n");
    printf("# Cree un array de char y escriba la palabra “Bienvenidos”  #\n");
    printf("#############################################################\n\n");

    //Ingreso de Datos
    printf("Ingrese string: Bienvenidos \n");     
    scanf(" %[a-zA-z]s", string);

    //salida de resultados
    printf("\n\n");
    printf("Palabra ingresada: %s \n", string);
    printf("\n");
}
