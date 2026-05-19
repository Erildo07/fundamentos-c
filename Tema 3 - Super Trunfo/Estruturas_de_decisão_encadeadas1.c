#include <stdio.h>

int main() {

    // Variável que guarda a nota
    int nota;

    // Pede a nota ao usuário
    printf("Digite a sua nota: ");

    // Lê a nota digitada
    scanf("%d", &nota);

    // A >= 90
    // B >= 80
    // C >= 70
    // D >= 60
    // F < 60

    // Verifica se a nota é maior ou igual a 90
    if (nota >= 90) {

        printf("Conceito A!");

    // Verifica se a nota é maior ou igual a 80
    } else if (nota >= 80) {

        printf("Conceito B!");

    // Verifica se a nota é maior ou igual a 70
    } else if (nota >= 70) {

        printf("Conceito C!");

    // Verifica se a nota é maior ou igual a 60
    } else if (nota >= 60) {

        printf("Conceito D!");

    // Se não entrar em nenhuma condição acima
    } else {

        printf("Conceito F!");
    }

    // Finaliza o programa
    return 0;
}