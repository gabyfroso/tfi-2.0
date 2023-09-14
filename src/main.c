#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "tools/Structs.h"
#include "Functions/Info.h"
#include "Functions/Ajustes.h"

int Reset_Text_value = 0;
int NOExitProgram = 1; // SIEMPRE será el valor de -5 quien lo cierre

int VisualPrefferences[2] = {1, 2}; // Logo with actualizaciones[0] - Color[1]

char *TXT_saved;

void Inicio();

void ResetText()
{
    if (Reset_Text_value == 0)
    {
        Reset_Text_value = 1;
    }
    else
    {
        Reset_Text_value = 0;
    }
}
int View_ResetText()
{
    return Reset_Text_value;
}

void Text_Saved(char *x)
{
    TXT_saved = x;
}
void view_Text_Saved()
{
    printf("%s", TXT_saved);
}


void ExitProgram()
{
    NOExitProgram = 1;
}




void Menu(){
    
}


int main(int argc, char const *argv[])
{
    

    
    
    return 0;
}

void Inicio()
{
    //Contendrá las funciones siguientes

    /*
        Menu - TFI - Ajustes - More Info
    */

   //Section TFI


    //Section Ajustes - Ajustes(&ArgStruct);
    char *xLogo = "*********************\nNombre:\n Frosoni, Hugo Gabriel\nCorreo:\n Gabyfroso@gmail.com\n\nNumero:\n +5493816164351\nForced Exit -5\n*********************";
    pthread_t Prefferences;
    struct Structs_FPreff Str_Ajustes;

    Str_Ajustes.CharData = xLogo;

    Str_Ajustes.Pref_ConsoleControl = VisualPrefferences[0];
    Str_Ajustes.Pref_Color = VisualPrefferences[1];

    Str_Ajustes.ChangeReset = ResetText;
    Str_Ajustes.Visual_Reset = View_ResetText();
    Str_Ajustes.ExtProgram = NOExitProgram;

    //Section Mas info
}