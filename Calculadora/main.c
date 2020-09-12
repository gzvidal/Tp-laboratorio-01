/***********************
 Calculadora TP 01
 Gonzalo Vidal
***********************/

#include <stdio.h>

#include "Funciones.h"


int main()
{
    int resultadoSuma;
    int resultadoResta;
    int resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialUno;
    int resultadoFactorialDos;
    int numeroX = 0;
    int numeroY = 0;
    int opcion;

    do{
        printf("1-Ingresar un valor\n2-Ingresar un segundo valor\n3-Calcular valores\n4-Mostrar valores\n5-Salir\n");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
            numeroX = PedirNumero();
            break;
            case 2:
            numeroY = PedirNumero();
            break;
            case 3:
            if(numeroX == 0 & numeroY == 0){
                printf("Todavia no ingreso un numero. Vuelva a la opcion 1 y 2. \n");
            } else
            {
            printf("Eligio calcular todas las operaciones \n");

            resultadoSuma = SumarNumeros(numeroX,numeroY);

            resultadoResta = RestarNumeros(numeroX, numeroY);

            resultadoMultiplicacion = MultiplicarNumeros(numeroX,numeroY);

            resultadoDivision = DividirNumeros(numeroX,numeroY);

            resultadoFactorialUno = CalcularFactorial(numeroX);

            resultadoFactorialDos = CalcularFactorial(numeroY);

            }
            break;
            case 4:
            if(numeroX == 0 && numeroY == 0){
                printf("Error. Vuelva a la opcion 1 y 2.\n");
            } else
            {
            printf("Eligio mostrar todos los resultados \n");

            printf("El resultado de la suma entre %d y %d es: %d \n", numeroX,numeroY,resultadoSuma);

            printf("El resultado de la resta entre %d y %d es: %d \n", numeroX,numeroY,resultadoResta);

            printf("El resultado de la multiplicacion entre %d y %d es: %d \n", numeroX,numeroY,resultadoMultiplicacion);

            printf("El resultado de la division entre %d y %d es: %d \n", numeroX,numeroY,resultadoDivision);

            printf("El resultado del factorial de %d es: %d \n",numeroX,resultadoFactorialUno);

            printf("El resultado del factorial de %d es: %d \n",numeroY, resultadoFactorialDos);
            }
            break;
            case 5:
            printf("Eligio salir del menu. Gracias por usar nuestra calculadora \n");
            break;
        }
    }while(opcion!=5);
}
