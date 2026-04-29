#include <stdio.h>

int main() {
    short temperaturas[1000]; // usa menos memória

    printf("Memoria usada: %zu bytes\n", sizeof(temperaturas));

    return 0;
}