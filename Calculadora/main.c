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
    int numeroX;
    int numeroY;


    int opcion;
    int respuesta;
    do{
        printf("1-Ingresar un valor. 2-Ingresar un segundo valor. 3-Calcular valores. 4-Mostrar valores. 5-Salir \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
            numeroX = pedirNumero();
            break;
            case 2:

            numeroY = pedirNumero();
            break;
            case 3:
            printf("Eligio calcular todas las operaciones \n");

            resultadoSuma = sumarNumeros(numeroX,numeroY);


            resultadoResta = restarNumeros(numeroX, numeroY);


            resultadoMultiplicacion = multiplicarNumeros(numeroX,numeroY);


            resultadoDivision = dividirNumeros(numeroX,numeroY);

            break;
            case 4:
            printf("Eligio mostrar todos los resultados \n");

            printf("El resultado de la suma entre %d y %d es: %d \n", numeroX,numeroY,resultadoSuma);

            printf("El resultado de la resta entre %d y %d es: %d \n", numeroX,numeroY,resultadoResta);

            printf("El resultado de la multiplicacion entre %d y %d es: %d \n", numeroX,numeroY,resultadoMultiplicacion);

            printf("El resultado de la division entre %d y %d es: %d \n", numeroX,numeroY,resultadoDivision);
            case 5:
            printf("\n Eligio salir del menu. Gracias por usar nuestra calculadora \n");
            break;
        }
    }while(opcion!=5);


}
