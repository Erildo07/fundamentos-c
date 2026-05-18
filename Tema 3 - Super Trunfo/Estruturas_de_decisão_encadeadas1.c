#include <stdio.h>

int main() {

    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    // A >= 90
    // B >= 80
    // C >= 70
    // D >= 60
    // F < 60


    if (nota >= 90){
        printf("Conceito A!");

    }  else if (nota >= 80) {
        printf("Conceito e B:");

    } else if (nota >= 70) {
        printf("Conceito e C: ");

    } else if (nota >= 60) {
        printf("Conceito e D");

    } else {
        printf("Conceito e F:");
    }
    
    return 0;
}