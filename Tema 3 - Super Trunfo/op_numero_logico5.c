#include<stdio.h>

int main()
{
    int idade1 = 35;
    int idade2 = 30;

    if (idade1 > idade2) {
        printf("Pessoa 1 e mais velha com %d anos\n", idade1);
    }
    else {
        printf("Pessoa 2 e mais velha com %d anos\n", idade2);
    }

    return 0;
}