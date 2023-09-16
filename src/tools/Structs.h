#pragma once

struct Structs_Fnormal
{
    void (*ChangePreff)(int[2]);

    void (*Reset_text)();
    
    void (*Text_Logo)(char *);
    void (*Text_Say)(char *);
    void (*Text_Say_add)(char *);

    void (*Exit_Program)(); // Finalizará el programa al ingresar -5
};