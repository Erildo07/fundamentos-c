#include <stdio.h>

int main() {

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        printf("Ambos sao positivos.\n");
    }

    return 0;
}