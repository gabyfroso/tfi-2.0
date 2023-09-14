struct Structs_FPreff
{
    char *CharData;

    int Pref_ConsoleControl;
    int Pref_Color;

    void (*ChangeReset)();
    int Visual_Reset;

    int ExtProgram;
};

struct Structs_Fnormal
{
    void (*Text_Logo)();
    void (*Text_Say)();
    void (*Text_Say_add)();
    
    void (*ExitProgram)(); // Finalizará el programa al ingresar -5
};