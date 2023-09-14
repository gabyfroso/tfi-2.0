#pragma ONCE
#include <stdio.h>
#include <windows.h>
#include <unistd.h>

/*
Seccion dedicada al texto para simplificar lo que diga
*/
void GOptions_classic(int x);
void TXT_Options_menu();
void TXT_Options_Ajustes();
void TXT_Info();

void TXT_Info()
{
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

    for (int i = 0; i < 15; i++)
    {
        if (i == 1 || i == 15)
        {
            printf("\n\n");
        }
        printf("%s", xLogo);
    }
}

void TXT_Options_menu()
{
    printf("\nMenu\n");
    printf("\n1)\t Trabajo Final Integrador");
    printf("\n2)\t Ajustes y Preferencias");
    printf("\n3)\t Mas info creador");
    GOptions_classic(0);
    sleep(1);
}

void TXT_Options_Ajustes()
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