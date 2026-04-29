#include<stdio.h> // biblioteca padrão para usar printf

int main()
{
    // unsigned long int → número grande positivo (sem sinal)
    // aguenta valores bem altos → OK
    unsigned long int numeroGrandePositivo = 4000000000;

    // unsigned int → só positivos (até ~4 bilhões)
    // esse valor ainda cabe → OK
    unsigned int numeroPositivo = 4000000000;

    // long long int → inteiro MUITO grande (até ~9 quintilhões)
    // esse valor cabe tranquilo → OK
    long long int numeroGrande = 4000000000;

    // int → inteiro comum (máx ~2 bilhões)
    // 4 bilhões ultrapassa o limite → OVERFLOW (valor errado)
    int numero = 4000000000;

    // %lu → formato para unsigned long int
    printf("Numero positovo grande: %lu\n", numeroGrandePositivo);

    // %u → formato para unsigned int
    printf("Numero positivo: %u\n", numeroPositivo);

    // %lld → formato para long long int
    printf("numero grande: %lld\n", numeroGrande);

    // %d → formato para int
    // aqui vai imprimir valor errado (overflow)
    printf("Numero: %d\n", numero);

    return 0; // fim do programa
}