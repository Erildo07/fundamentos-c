#include<stdio.h>
int main()
{
    /*
    Operações básicas:

    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite mais um numero: ");
    scanf("%d",&num2);



    soma = num1 + num2;
    subtracao = num1 -num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("O esultado da soma e: %d \n", soma);
    printf("O esultado da subricao e: %d \n", subtracao);
    printf("O esultado da multiplicacao e: %d \n", multiplicacao);
    printf("O esultado da divisao e: %d \n", divisao);

    return 0;
}

