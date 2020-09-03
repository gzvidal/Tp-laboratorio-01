#include <stdio.h>

int pedirNumeroUno()
{
    int numeroUno;
    printf ("Ingrese un numero: \n");
    scanf ("%d", &numeroUno);
    return numeroUno;

    //Pide el número y se lo asigna a la variable numeroUno
}

int pedirNumeroDos()
{
    int numeroDos;
    printf ("Ingrese un segundo numero: \n");
    scanf ("%d", &numeroDos);
    return numeroDos;

    //Pide el número y se lo asigna a la variable numeroDos
}


int mostrarNumerosMenu(int numeroUno, int numeroDos)
{
    printf("El primer numero que ingreso es: %d \n", numeroUno);

    printf("y el segundo numero que ingreso es: %d \n", numeroDos);
}

int menuDeOperaciones(){
    int opcion;
    printf ("¿Desea sumarlos (0), restarlos (1), dividirlos (2) o multiplicarlos (3)");
    scanf("%d", &opcion);
       if(opcion == 0){
           int sumaDeNumeros();
       }
}


int sumaDeNumeros(int numeroUno, int numeroDos)
{
    int resultadoSuma;
    resultadoSuma = numeroUno + numeroDos;
     printf ("Suma %d \n", resultadoSuma);

     //Se declara la variable del resultado para colocar el resultado de la suma para luego mostrarlo.
}

int restaDeNumeros(int numeroUno, int numeroDos)
{
    int resultadoResta;
    resultadoResta = numeroUno - numeroDos;
     printf ("Resta: %d \n", resultadoResta);
}

int divisionDeNumeros(int numeroUno, int numeroDos)
{
    int resultadoDivision;
    resultadoDivision = numeroUno / numeroDos;
     printf ("Division: %d \n", resultadoDivision);
}

int multiplicacionDeNumeros(int numeroUno, int numeroDos)
{
    int resultadoMultiplicacion;
    resultadoMultiplicacion = numeroUno * numeroDos;
     printf ("La multiplicación es: %d \n", resultadoMultiplicacion);
}

