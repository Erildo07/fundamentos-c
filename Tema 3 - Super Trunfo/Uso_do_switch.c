#include <stdio.h>

int main() {

    // Variável para armazenar a opção escolhida
    int opcao;

    // Mostra o menu na tela
    printf("Escolha uma opcao:\n");

    // Mostra a opção 1
    printf("1. Verificar saldo\n");

    // Mostra a opção 2
    printf("2. Fazer deposito\n");

    // Mostra a opção 3
    printf("3. Fazer saque\n");

    // Lê a opção digitada pelo usuário
    scanf("%d", &opcao);

    // Verifica a opção escolhida
    switch (opcao) {

        // Caso a opção seja 1
        case 1:

            // Mostra o saldo
            printf("Saldo atual: R$ 1.000,00\n");

            // Encerra o case
            break;

        // Caso a opção seja 2
        case 2:

            // Mostra mensagem de depósito
            printf("Deposito realizado com sucesso\n");

            // Encerra o case
            break;

        // Caso a opção seja 3
        case 3:

            // Mostra mensagem de saque
            printf("Saque realizado com sucesso\n");

            // Encerra o case
            break;

        // Executa se a opção for inválida
        default:

            // Mostra mensagem de erro
            printf("Opcao invalida\n");
    }

    // Finaliza o programa
    return 0;
}