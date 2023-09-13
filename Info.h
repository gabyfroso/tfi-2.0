#pragma ONCE
#include "lib/GGraphs.h"

void Info_Perfil()
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