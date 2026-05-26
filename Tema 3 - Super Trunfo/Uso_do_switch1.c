#include <stdio.h>

int main() {

    // Variável da opção
    int opcao;

    // Variável do valor digitado
    float valor;

    // Variável do saldo
    float saldo = 1000.0;

    // Mostra o menu
    printf("Escolha uma opcao:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");

    // Lê a opção
    scanf("%d", &opcao);

    // Verifica a opção escolhida
    switch (opcao) {

        // Ver saldo
        case 1:

            // Mostra o saldo atual
            printf("Saldo atual: R$ %.2f\n", saldo);
            break;

        // Fazer depósito
        case 2:

            // Pede o valor do depósito
            printf("Digite o valor do deposito: ");

            // Lê o valor
            scanf("%f", &valor);

            // Soma o valor ao saldo
            saldo += valor;

            // Mostra o novo saldo
            printf("Deposito realizado com sucesso\n");
            printf("Novo saldo: R$ %.2f\n", saldo);
            break;

        // Fazer saque
        case 3:

            // Pede o valor do saque
            printf("Digite o valor do saque: ");

            // Lê o valor
            scanf("%f", &valor);

            // Verifica se tem saldo suficiente
            if (valor <= saldo) {

                // Remove o valor do saldo
                saldo -= valor;

                // Mostra novo saldo
                printf("Saque realizado com sucesso\n");
                printf("Novo saldo: R$ %.2f\n", saldo);

            } else {

                // Mostra erro
                printf("Saldo insuficiente\n");
            }

            break;

        // Opção inválida
        default:

            printf("Opcao invalida\n");
    }

    // Finaliza o programa
    return 0;
}