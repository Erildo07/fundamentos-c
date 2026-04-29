#include<stdio.h>
int main()
{
 /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++

    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int num1 = 1,  resultado;

    printf("Antes inceremento: %d\n", num1);
    //num1 = num1 +1;
    //num1 ++;
    //Pós incremento = num1;
    //resultado = num1;
    //numero ++;
    resultado = num1 ++;
    //printf("Apos incremento: %d\n", num1);
    printf("Apos Pos-incremento - Numero 1: %d ->  Resultado: %d\n", num1, resultado);

    resultado = ++ num1;
    printf("Apos Pre-incremento - Numero 1: %d ->  Resultado: %d\n", num1, resultado);

    //num1 = num1 - 1 ;
    //num1 --;
    //printf("Apos decremento: %d\n", num1);

    resultado = -- num1;
    printf("Apos Pre-Decremento - Numero 1: %d ->  Resultado: %d\n", num1, resultado);

    resultado = num1 --;
    printf("Apos Pos-Decremento - Numero 1: %d ->  Resultado: %d\n", num1, resultado);







    return 0;
}
