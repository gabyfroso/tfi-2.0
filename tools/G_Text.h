#pragma ONCE
#include <stdio.h>
#include <windows.h>
#include <unistd.h>


/*
Seccion dedicada al texto para simplificar lo que diga
*/
void GOptions_classic(int x);
void GOptions_menu();
void GOptions_Ajustes();

void GOptions_menu()
{
    printf("\nMenu\n");
    printf("\n1)\t Trabajo Final Integrador");
    printf("\n2)\t Ajustes y Preferencias");
    printf("\n3)\t Mas info creador");
    GOptions_classic(0);
    sleep(1);
}

void GOptions_Ajustes()
{
    printf("\n\tMenu - Ajustes\n");
    printf("\n1)\t Activar/Desactivar Logo");
    printf("\n2)\t Activar/Desactivar Actualizacion por cambio de consola");
    printf("\n3)\t Activar/Desactivar Ambos");
    GOptions_classic(0);
    sleep(1);
}

/*


**********

*******************

**********


*/

void GOptions_classic(int x)
{
    if (x == 0)
    {
        printf("\n\nSalir(Forzado): -5");
        printf("\n\t>");
    }
}