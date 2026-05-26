#include <stdio.h>

int main() {

    // Variável para armazenar a idade
    int idade;

    // Variável para armazenar a renda mensal
    float renda;

    // Pede a idade ao usuário
    printf("Digite a sua idade: ");

    // Lê a idade digitada
    scanf("%d", &idade);

    // Pede a renda mensal ao usuário
    printf("Digite a sua renda mensal:");

    // Lê a renda digitada
    scanf("%f", &renda);

    // Verifica se a idade é menor que 18 OU maior que 60
    if (idade < 18 || idade > 60) {

        // Verifica se a renda é menor que 2000
        if (renda < 2000.0) {

            // Executa se atender às duas condições
            printf("Voce esta qualificado para o desconto especial\n");

        } else {

            // Executa se a renda for maior ou igual a 2000
            printf("Voce nao esta qualificado para o desconto devido a renda\n");
        }

    } else {

        // Executa se a idade não estiver na faixa permitida
        printf("Voce nao esta qualificado para o desconto devido a idade\n");
    }

    // Finaliza o programa
    return 0;
}