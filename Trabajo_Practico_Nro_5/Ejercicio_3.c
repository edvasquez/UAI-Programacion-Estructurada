#include <iostream>
#include "Ejercicios.h"

void ejercicioNro3()
{
    //Declaracion de variables
    int length = 0;
    int list[3][3] = {{100, 74, 99},
                      {11, 36, 68},
                      {23, 9, 81}
                     };

    //Titulo
    system("color 3f");
    printf("##############################################\n");
    printf("# Cree una matriz de enteros de 3 x 3.       #\n");
    printf("# Inicialícela en base a la siguiente tabla: #\n");
    printf("# 100 | 74 | 99                              #\n");
    printf("# 11  | 36 | 68                              #\n");
    printf("# 23  | 9  | 81                              #\n");
    printf("##############################################\n\n");

    //Ingreso de Datos
    length = sizeof(list[0]) / sizeof(list[0][0]);

    //salida de resultados
    printf("\n\n");
    printf("Imprecion matriz: \n");
    for(int i = 0; i < length; i++){
      for(int j = 0; j < length; j++){
        printf("Elemento[%d][%d]: %d \n", i+1, j+1, list[i][j]);
    }};
    printf("\n");
}
