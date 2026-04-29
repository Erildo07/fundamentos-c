#include <stdio.h> // biblioteca padrão para usar printf

int main() {

    // sizeof(int) → mostra quantos bytes o tipo int usa na sua máquina
    // %zu → formato correto para mostrar valores de tamanho (size_t)
    printf("int: %zu bytes\n", sizeof(int));

    // sizeof(long int) → tamanho do long int
    // pode variar dependendo do sistema (Windows ou Linux)
    printf("long int: %zu bytes\n", sizeof(long int));

    // sizeof(long long) → tamanho do long long
    // normalmente 8 bytes
    printf("long long: %zu bytes\n", sizeof(long long));

    // sizeof(char) → sempre 1 byte
    printf("char: %zu byte\n", sizeof(char));

    return 0; // fim do programa
}