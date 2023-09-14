#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "tools/Structs.h"

int Reset_Text = 0;
int ExitPrograma = 0;

int VisualPrefferences[3] = {1, 1, 2}; // Logo[0] - Actualizaciones[1] - Color[2]

void *Settings(void *arg);


void ChangeReset()
{
    if (Reset_Text == 0)
    {
        Reset_Text = 1;
    }
    else
    {
        Reset_Text = 0;
    }
}
int VisualReset()
{
    return Reset_Text;
}


int main(int argc, char const *argv[])
{
    char *xLogo = "*********************\nNombre:\n Frosoni, Hugo Gabriel\nCorreo:\n Gabyfroso@gmail.com\n\nNumero:\n +5493816164351\nForced Exit -5\n*********************";
    pthread_t Prefferences;
    struct Prefferences_struct ArgStruct;

    ArgStruct.CharData = xLogo;

    ArgStruct.Pref_Logo = VisualPrefferences[0];
    ArgStruct.Pref_ResetConsole = VisualPrefferences[1];
    ArgStruct.Pref_Color = VisualPrefferences[2];

    ArgStruct.ChangeReset = ChangeReset;
    ArgStruct.Visual_Reset = VisualReset();
    ArgStruct.ExtProgram = ExitPrograma;

    if (pthread_create(&Prefferences, NULL, Settings, &ArgStruct) != 0)
    {
        perror("Error al administrar preferencias, consultar a Gabyfroso");
        exit(EXIT_FAILURE);
    }
    
    return 0;
}


void *Settings(void *arg)
{

}