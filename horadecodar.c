#include<stdio.h>
int main()
{
    int nota1;
    int nota2;
    int nota3;

    int media;


    printf("____________________________\n");
    printf("-----inicio do programa-----\n");
    printf("____________________________\n");
    
    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%d",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media foi: %d ", media);
    

    return 0;
}
