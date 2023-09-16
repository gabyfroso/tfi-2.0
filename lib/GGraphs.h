#pragma ONCE
#include <stdio.h>
#include "./GConsole.h"

void GGraphs_RecompletarDatos_y_Logo(const char *Intro);

void GGraphs_RecompletarDatos_y_Logo(const char *Intro)
{
    const char *LogoGatoMio[13] = {
    "@@@@@/@@@@@@@@@@@@@/@@@@@",
    "@@@/////@@@@@@@@@&///&@@@",
    "@@///////@@@@@@@@/////&@@",
    "@//////////////////////&@",
    "&//////////////////////&@", //
    "@&/////////////////////Y@",
    "&//////////////////////6@",
    "a//////////////////////@@",
    "v/////////////////////-@@",
    "@@////////////////////&@@", // 24 char - 13 filas
    "v@@///@@/////////@///$@@@",
    "  @@v@@///////////@@v@@@ ",
    "    @@@@@@@@@@@@@@@@@@  "};

const int SizeLogoFila = 13;
const int SizeLogoColumna = 28;

    int salteoN = 0;
    int PosiCharIntro = 0;
    for (int FilaConsole = 0; FilaConsole < SizeLogoFila; FilaConsole++)
    {

        // Logo ajustado izquierda
        for (int space = 0; space < SizeConsole() - SizeLogoColumna; space++)
        {
            if (Intro[PosiCharIntro] != '\0')
            {
                if (Intro[PosiCharIntro] == '\n')
                {
                    printf(" ");
                    salteoN++;
                }

                if (salteoN == 0)
                {
                    printf("%c", Intro[PosiCharIntro]);
                    PosiCharIntro++;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("  %s\n", LogoGatoMio[FilaConsole]);
        if (salteoN != 0)
        {
            salteoN = 0;
            PosiCharIntro++;
        }
    }
    PosiCharIntro = 0;
    printf("\n");
}