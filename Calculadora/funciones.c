#include <stdio.h>

int pedirNumero()
{
    int numero;
    printf("Ingrese un numero por favor \n");
    scanf("%d", &numero);
    return numero;
}

int sumarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno + dos;
    return resultado;
}

int restarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno - dos;
    return resultado;
}

int dividirNumeros(int uno, int dos)
{
    float resultado = 0;
    resultado = uno / dos;
    return (float)resultado;
}

int multiplicarNumeros(int uno, int dos)
{
    int resultado = 0;
    resultado = uno * dos;
    return resultado;
}

int menuDeOpciones(int opcion)
{
    scanf("%d", &opcion);
}




