#pragma ONCE
#include "../../lib/GGraphs.h"
#include "G_Text.h"

void Ajustes(void *args);

void Ajustes(void *args)
{
    char *cLogo = "Bienvenido a info";
    char XcharSavedText[200] = "";
    char UserElect[10] = "";

    struct Structs_Fnormal *x_args = (struct Structs_Fnormal *)args;
    void (*ChangePreff)(int[2]) = x_args->ChangePreff;
    void (*Reset_text)() = x_args->Reset_text;
    
    void (*Text_Logo)(char *) = x_args->Text_Logo;
    void (*Text_Say)(char *) = x_args->Text_Say;
    void (*Text_Say_add)(char *) = x_args->Text_Say_add;

    void (*Exit_Program) = x_args->Exit_Program;
}