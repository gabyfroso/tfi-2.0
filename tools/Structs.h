struct Prefferences_struct
{
    char *CharData;

    int Pref_Logo;
    int Pref_ResetConsole;
    int Pref_Color;

    void (*ChangeReset)();
    int Visual_Reset;

    int ExtProgram;
};

struct FunctionNormal
{
    char *CharIntro;
    char *Options;

    void (*FunctionText)();
    void (*FunctionSiguiente)();
};