#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <pthread.h>

#include "../lib/GGraphs.h"
#include "tools/Structs.h"

#include "Functions/info.h"
#include "Functions/Inicio.h"
#include "Functions/Ajustes.h"

int TXT_Reset = 1;
int NOExitProgram = 1; // SIEMPRE será el valor de -5 quien lo cierre

// Logo y Act=3  Logo=2   Act=1  nothing = 0
// Color[1]
int VPreff[2] = {3, 2};

char *TXT_Logo;

char *TXT_say;
char *TXT_saved;

void ChangePreff(int xpreff[2]);
void ResetText();

void Text_Logo(char *xLogo);
void Text_Say(char *x);
void Text_Say_add(char *x);

void Exit_Program();

void *Central();

int main(int argc, char const *argv[])
{
    struct Structs_Fnormal Datas;
    Datas.ChangePreff = ChangePreff;
    Datas.Reset_text = ResetText;

    Datas.Text_Logo = Text_Logo;
    Datas.Text_Say = Text_Say;
    Datas.Text_Say_add = Text_Say_add;

    Datas.Exit_Program = Exit_Program;

    pthread_t Center;
    if (pthread_create(&Center, NULL, Central, NULL) != 0)
    {
        perror("Error al crear el Central, consultar a Gabyfroso");
        exit(EXIT_FAILURE);
    }

    Inicio(&Datas);

    return 0;
}

void *Central()
{
    int szConsole = 0;

    while (1)
    {

        if (TXT_Reset)
        {
            system("cls");
            char txt[6] = "color ";
            char xtxtVpref[4] = (char)(VPreff[1]);
            strcpy(txt, xtxtVpref);
            system(txt);
        }

        switch (VPreff[0])
        {
        case 0: // TODO desactivado
        {
            if (TXT_Reset)
            {
                GGraphs_RecompletarDatos_y_Logo(TXT_Logo);
                printf(TXT_say);
                printf(TXT_saved);
            }
        }
        break;
        case 3: // TODO activado
        {
            if (SizeConsole() != szConsole)
            {
                szConsole = SizeConsole();
                system("cls");
                GGraphs_RecompletarDatos_y_Logo(TXT_Logo);
                printf(TXT_say);
                printf(TXT_saved);
            }
        }
        break;
        default:
            perror("ERROR CRITICO EN VPreff");
            break;
        }

        TXT_Reset = 0;
    }
    return NULL;
}

/*

///

>>>>>>>>>>>>>>>>>>> CENTRAL

///

*/

void Text_Logo(char *xLogo)
{
    TXT_Logo = xLogo;
}

void ChangePreff(int xpreff[2])
{
    VPreff[0] = xpreff[0];
    VPreff[1] = xpreff[1];
}

void ResetText()
{
    if (TXT_Reset == 0)
    {
        TXT_Reset = 1;
    }
    else
    {
        TXT_Reset = 0;
    }
}

void Text_Say(char *x)
{
    TXT_say = x;
}

void Text_Say_add(char *x)
{
    TXT_saved = x;
}

// IMPORTANT
void Exit_Program()
{
    NOExitProgram = 1;
}
