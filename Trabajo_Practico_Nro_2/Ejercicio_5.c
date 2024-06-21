//
// Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es
//
#include <iostream>
#include "Ejercicios.h"

void ejercicioNro5()
{
    //Declaracion de variables
    unsigned int lado1 = 0;
    unsigned int lado2 = 0;
    unsigned int lado3 = 0;

    //Titulo
    printf("###############################################################################\n");
    printf("# Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es. #\n");
    printf("###############################################################################\n\n");
    
    //Ingreso de datos
    system("color 3f");
    printf("Ingrese el primer lado: ");
    scanf("%d", &lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &lado2);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &lado3);

    //Evaluacion y salida de resultados
    printf("\n");
    if(lado1 == lado2 && lado2 == lado3){
        printf("El triangilo es equilatero \n");
    };
    if((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)){
        printf("El triangulo es isoceles \n");
    };
    if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
        printf("El triangulo es escaleno \n");
    };
    
    //system("pause");
}
