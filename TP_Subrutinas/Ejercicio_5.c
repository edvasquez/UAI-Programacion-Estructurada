#include <iostream>
#include <iomanip>
#include "Ejercicios.h"
using namespace std;

void promedio(int valor1, int valor2, int valor3, float *resultado);

void ejercicioNro5(void)
{
    //Declaracion de variables
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    float resultado = 0;
    
    //Titulo
    system("color 3f");
    printf("#############################################################################\n");
    printf("# Crear una función que reciba tres números enteros y devuelva su promedio. #\n");
    printf("# Los números se pasan por valor y el resultado por referencia              #\n");
    printf("#############################################################################\n\n");

    //Ingreso de datos
    cout << "Ingrese primer valor: ";
    cin >> valor1;
    fflush(stdin);
    cout << "Ingrese segundo valor: ";
    cin >> valor2;
    fflush(stdin);
    cout << "Ingrese tercer valor: ";
    cin >> valor3;

    // Calculos
    promedio(valor1, valor2, valor3, &resultado);

    //salida de resultados
    cout << endl << endl;
    // imprime solo 2 decimales
    cout << "El promedio es: " << fixed << setprecision(2) << resultado << endl;
    //printf("El promedio es: %0.2f \n", resultado);
}

void promedio(int valor1, int valor2, int valor3, float *resultado)
{
    *resultado = (float)(valor1 + valor2 + valor3)/3;
}
