#include<stdio.h> // biblioteca para usar printf

int main() // função principal do programa
{
    int a = 5; // variável inteira a recebe 5
    int b = -10; // variável inteira b recebe -10
    int c = 1; // variável inteira c recebe 1

    // if = "se"

    // a > 0
    // verifica se a é maior que 0

    // &&
    // operador lógico E
    // precisa que os dois lados sejam verdadeiros

    // b < 0
    // verifica se b é menor que 0

    // ||
    // operador lógico OU
    // basta um lado ser verdadeiro

    // c == 0
    // verifica se c é igual a 0

    // expressão:
    // (a > 0 && b < 0) || (c == 0)

    // substituindo valores:
    // (5 > 0 && -10 < 0) || (1 == 0)

    // resultado:
    // (verdadeiro && verdadeiro) || falso

    // resultado final:
    // verdadeiro

    if (a > 0 && b < 0 || c == 0) {

        // executa se a condição for verdadeira
        printf("A condicao e verdadeira: \n");

    } else {

        // executa se a condição for falsa
        printf("A condicao e falsa:\n");
    }

    return 0; // encerra o programa
}