#include <stdio.h>

int main()
{
    // Variável para armazenar a idade digitada
    int idade;

    // Mostra mensagem na tela
    printf("Digite sua idade: ");

    // Lê a idade digitada pelo usuário
    scanf("%d", &idade);

    // Verifica se a idade é menor que 12
    if (idade < 12) {

        // Executa se for menor que 12
        printf("Voce e uma crianca");

    // Verifica se idade é maior ou igual a 12 E menor que 18
    } else if (idade >= 12 && idade < 18) {

        // Executa se estiver entre 12 e 17
        printf("Voce e um adolescente");

    // Verifica se idade é maior ou igual a 18 E menor que 60
    } else if (idade >= 18 && idade < 60) {

        // Executa se estiver entre 18 e 59
        printf("Voce e um adulto");

    } else {

        // Executa se idade for 60 ou maior
        printf("Voce e um idoso");
    }

    // Finaliza o programa
    return 0;
}