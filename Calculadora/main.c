/***********************
 Calculadora TP 01
 Gonzalo Vidal
***********************/

#include <stdio.h>

#include "Funciones.h"


int main()
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    primerNumero = pedirNumeroUno();
    segundoNumero = pedirNumeroDos();

    mostrarNumerosMenu(primerNumero, segundoNumero);

    menuDeOperaciones(primerNumero, segundoNumero);

}
