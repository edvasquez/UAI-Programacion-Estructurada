#include <iostream>
#include "Ejercicios.h"

#define LENGHT 13
#define FIN 0
//Meses del año
#define ENERO 31
#define FEBRERO 29
#define MARZO 31
#define ABRIL 30
#define MAYO 31
#define JUNIO 30
#define JULIO 31
#define AGOSTO 31
#define SEPTIEMBRE 30
#define OCTUBRE 31
#define NOVIEMBRE 30
#define DICIEMBRE 31

void ejercicioNro7()
{
    //Declaracion de variables
    int list[LENGHT] = {FIN, ENERO, FEBRERO, MARZO, ABRIL,
                        MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE,
                        OCTUBRE, NOVIEMBRE, DICIEMBRE};
    int mes = 0;
    int i = 0;

    //Titulo
    system("color 3f");
    printf("########################################################\n");
    printf("# Desarrolle un programa que almacene en un vector     #\n");
    printf("# el número de días que tiene cada mes                 #\n");
    printf("# (supondremos que es un año no bisiesto),             #\n");
    printf("# pida al usuario que le indique un mes                #\n");
    printf("# (1=enero, 12=diciembre) y muestre en                 #\n");
    printf("# pantalla el número de días que tiene ese mes.        #\n");
    printf("########################################################\n\n");

    //Ingreso de Datos
    do{
        printf("Seleccione un mes: \n");
        printf(" %d -> Finalizar \n\n", i++);
        printf(" %d -> Enero \n", i++);
        printf(" %d -> Febrero \n", i++);
        printf(" %d -> Marzo \n", i++);
        printf(" %d -> Abril \n", i++);
        printf(" %d -> Mayo \n", i++);
        printf(" %d -> Junio \n", i++);
        printf(" %d -> Julio \n", i++);
        printf(" %d -> Agosto \n", i++);
        printf(" %d -> Septiembre \n", i++);
        printf(" %d -> Octubre \n", i++);
        printf(" %d -> Noviembre \n", i++);
        printf(" %d -> Diciembre \n", i++);
    
        printf("\n");
        
        fflush(stdin);
        printf("Ingrese el mes: ");
        scanf("%d", &mes);
    
        //salida de resultados
        printf("\n");
        if(FIN < mes && mes < LENGHT){
          printf("El Mes tiene la cantidad de dias: %d \n", list[mes]);
        };
        printf("\n");
        i = 0;
    }while(mes != FIN);
}
