#include <iostream>
#include "Ejercicios.h"

#define FILAS 2
#define COLUMNAS 2

void ingreso_datos(int matriz[FILAS][COLUMNAS]);

void ejercicioNro8()
{
    //Declaracion de variables
    int matriz_A[FILAS][COLUMNAS];
    int matriz_B[FILAS][COLUMNAS];
    int AXB[FILAS][COLUMNAS];
    //int j = 0;

    //Titulo
    system("color 3f");
    printf("############################################################\n");
    printf("# Desarrolle un programa que pida al usuario los datos     #\n");
    printf("# de dos matrices de 2x2, y calcule y muestre su producto. #\n");
    printf("# Investigue como obtener el producto de dos matrices.     #\n");
    printf("############################################################\n\n");

    //Ingreso de Datos
    printf("Matriz A: %d X %d \n", FILAS, COLUMNAS);
    ingreso_datos(matriz_A);
    printf("\n");
    printf("Matriz B: %d X %d \n", FILAS, COLUMNAS);
    ingreso_datos(matriz_B);
    
    //Calculos
    AXB[0][0] = (matriz_A[0][0]*matriz_B[0][0]) + (matriz_A[0][1]*matriz_B[1][0]);
    AXB[0][1] = (matriz_A[0][0]*matriz_B[0][1]) + (matriz_A[0][1]*matriz_B[1][1]);
    AXB[1][0] = (matriz_A[1][0]*matriz_B[0][0]) + (matriz_A[1][1]*matriz_B[1][0]);
    AXB[1][1] = (matriz_A[1][0]*matriz_B[0][1]) + (matriz_A[1][1]*matriz_B[1][1]);

    //Imprimir resultado
    printf("\n");
    printf("Matriz AxB: \n");
    for(int i=0, j=0; i < FILAS; i++){
       printf(" %d %d \n", AXB[i][j], AXB[i][j+1]);
    };
    printf("\n");
}


void ingreso_datos(int matriz[FILAS][COLUMNAS]){
     int j = 0;
     for(int i = 0; i < FILAS; i++){
      fflush(stdin);
      printf("Ingrese 2 valores separado por '-': ");     
      scanf("%d-%d", &matriz[i][j], &matriz[i][j+1]);
    };
}
