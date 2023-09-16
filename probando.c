#include <stdio.h>
#include <windows.h>

int main() {
    // Cambiar el color del texto a rojo
    printf("\033[31mTexto en rojo\033[0m\n");

    // Cambiar el color del texto a verde
    printf("\033[32mTexto en verde\033[0m\n");

    // Cambiar el color del texto a amarillo
    printf("\033[33mTexto en amarillo\033[0m\n");

    printf("\033[31mA\033[33mR\033[32mC\033[36mO\033[34mI\033[35mR\033[31mI\033[0mS\n");

    char palabra[] = "ARCOIRIS";
    int colores[] = {31, 33, 32, 36, 34, 35, 31}; // Códigos ANSI de colores correspondientes

    for (int i = 0; i < sizeof(palabra) - 1; i++) {
        printf("\033[%dm%c", colores[i], palabra[i]);
    }

    printf("\033[0m\n");

    system("pause");

    return 0;
}