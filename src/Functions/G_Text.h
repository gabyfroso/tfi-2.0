#pragma once
#include <stdio.h>
#include <windows.h>
#include <unistd.h>

/*
Seccion dedicada al texto para simplificar lo que diga
*/
char* GOptions_classic(int x);
char* GTXT_menu();
char* GTXT_Ajustes();
char* GTXT_Info();

char* GTXT_Info()
{
    char *super;

    char *xLogo[15] = {
        "*********************",
        "Nombre: Frosoni, Hugo Gabriel",
        "DNI: 44866295",
        "Legajo: 56657",
        " ",
        "\tCorreo:",
        "Gabyfroso@gmail.com",
        "\tNumero:"
        "+54 9 381 616-4351"
        " ",
        "\tGithub: ",
        "https://github.com/gabyfroso?tab=repositories",
        "\tTwitter:",
        "https://twitter.com/Gabyfroso",
        "*********************"};

    int lg = 15;

    for (int i = 0; i < lg; i++)
    {
        strcpy(super, xLogo[i]);
        strcpy(super, '\n');
    }

    return super;
}

char* GTXT_menu()
{
    char *super = "\nMenu\n\n1)\t Trabajo Final Integrador\n2)\t Ajustes y Preferencias\n3)\t Mas info creador";

    strcpy(super, GOptions_classic(0));

    return super;
}

char* GTXT_Ajustes()
{
    char *super;
    char *xini = "\n\tMenu - Ajustes\n\n1)\t Activar/Desactivar Logo\n2)\t Activar/Desactivar Actualizacion por cambio de consola\n3)\t Activar/Desactivar Ambos";
    char *xini2= "\n";
    strcpy(super, xini);
    strcpy(super, xini2);
    strcpy(super, GOptions_classic(0));

    return super;
}

/*


**********

*******************

**********


*/

char* GOptions_classic(int x)
{
    return "\n\nSalir(Forzado): -5\n\t>";
}