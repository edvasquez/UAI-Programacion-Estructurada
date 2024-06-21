//
// Ingresar los datos de facturación de una empresa. Se conoce Número de factura,
// Número de artículo, Cantidad vendida y Precio unitario
// Los datos finalizan con numero de factura = 0,
// cada factura sólo tiene un número de artículo, y existen sólo tres artículos.
//

#include <iostream>
#include "Ejercicios.h"

void ejercicioNro4()
{
    //Declaracion de variables
    int facturaNro = 1;
    int articuloNro = 0;
    int cantidad = 0;
    float precioUnitario = 0;
    float importe = 0;
    //float total = 0;
    
    //Titulo
    system("color 3f");
    printf("##################################################################################\n");
    printf("# Ingresar los datos de facturación de una empresa. Se conoce Número de factura, #\n");
    printf("# Número de artículo, Cantidad vendida y Precio unitario.                        #\n");
    printf("# Los datos finalizan con numero de factura = 0,                                 #\n");
    printf("# cada factura sólo tiene un número de artículo, y existen sólo tres artículos.  #\n");
    printf("##################################################################################\n\n");

    printf("-------------------------------------------------------\n");
    printf("La carga de facturas termina con un nro de factura = 0 \n");
    printf("------------------------\n");
    printf("Nro de articulos validos\n"); 
    printf(" 1 -> fideos\n");
    printf(" 2 -> azucar\n");
    printf(" 3 -> Arroz\n");
    printf("-------------------------------------------------------\n\n");
    
    
    while(facturaNro != 0){
      //Ingreso y validacion de datos
      printf("Ingrese Factura Nro: ");
      fflush(stdin);
      scanf("%d", &facturaNro);
      if(facturaNro == 0) continue;

      printf("Ingrese Articulo Nro: ");
      fflush(stdin);
      scanf("%d", &articuloNro);
      if(articuloNro <= 0 || 4 <= articuloNro){
        printf("Nro articulo incorrecto, vuelva a ingresar los datos\n\n");
        continue;
      };
      printf("Ingrese cantidad: ");
      fflush(stdin);
      scanf("%d", &cantidad);
      if(cantidad < 0){
        printf("Cantidad incorrecta, vuelva a ingresar los datos\n\n");
        continue;
      };
      printf("Ingrese Precio Unitario: ");
      fflush(stdin);
      scanf("%f", &precioUnitario);
      if(precioUnitario < 0){
        printf("Precio unitario incorrecto, vuelva a ingresar los datos\n\n");
        continue;
      };           
      
      // Calculos
      importe = (float)(cantidad * precioUnitario);
      //total +=importe;
      
      // Salida de resultados               
      printf("\n----------------------------------------------------------------");
      printf("\n   Factura Nro: %d", facturaNro);
      printf("\n________________________________________________________________");
      printf("\n  Nro Articulo     Cantidad     Precio Unitario     Importe ");
      printf("\n----------------------------------------------------------------");
      printf("\n       %-1d              %-5d       $%-10.2f        $%-10.2f", articuloNro, cantidad, precioUnitario, importe);
      printf("\n________________________________________________________________");
      printf("\n                                       Subtotal      $%0.2f", importe);
      printf("\n                                     ---------------------------");
      printf("\n                                       Total         $%0.2f", importe);
      printf("\n                                     ---------------------------");
      printf("\n\n");
    };
}
