#pragma ONCE
#include <windows.h>
#include "../tools/Structs.h"
#include "G_Text.h"

void Ajustes(void *args);

void Ajustes(void *args)
{
    char *cLogo = "Bienvenido a ajustes";
    char XcharSavedText[200] = "";
    char UserElect[10] = "";

    struct Structs_Fnormal *x_args = (struct Structs_Fnormal *)args;
    void (*ChangePreff)(int[2]) = x_args->ChangePreff;
    void (*Reset_text)() = x_args->Reset_text;
    
    void (*Text_Logo)(char *) = x_args->Text_Logo;
    void (*Text_Say)(char *) = x_args->Text_Say;
    void (*Text_Say_add)(char *) = x_args->Text_Say_add;

    void (*Exit_Program) = x_args->Exit_Program;

    do
    {
        Reset_text(); //Reinicia los textos para no ocupar toda la pantalla con el de funcion anterior.
        Text_Logo(cLogo); //Muestra en el logo, si es que hay
        Text_say(GTXT_Ajustes()); //Muestra en pantalla

        Scan(UserElect);

        strcat(XcharSavedText, UserElect);

        //Este lo añade de manera pasiva, y lo muestra de manera presente, del cual cualquier actualización lo añadirá a la lista salvada
        Text_Say_add(XcharSavedText);

        switch(atoi(UserElect))
        {
            case 1:
                {
                    //ExampleFunction(args); //los mismos argumentos, sin necesidad de convertirlos para usarlos como antes
                }
                break;
            case 2:
            {

            }
            case -5:
                {
                    Exit_Program(); //Forzar cierre
                }
                break;
            Default:
                break;

        }
    

    //Para que si el usuario salió por error, revise lo que tenía los ejercicios y no se le reinicie.
    System("PAUSE"); 

    
    } while(atoi(UserElect) != 5);

}