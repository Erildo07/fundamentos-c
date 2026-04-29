#include<stdio.h> // biblioteca padrão para entrada e saída (printf, scanf)

int main() // função principal do programa (onde tudo começa)
{

    // =========================
    // NOME DOS PRODUTOS
    // =========================
    char produtoA[30] = "Produto A"; // nome do produto A (texto)
    char produtoB[30] = "Produto B"; // nome do produto B (texto)

    // =========================
    // ESTOQUE DOS PRODUTOS
    // =========================
    unsigned int estoqueA  = 1000; // quantidade em estoque do produto A
    unsigned int estoqueB = 2000;   // quantidade em estoque do produto B

    // =========================
    // PREÇO UNITÁRIO
    // =========================
    float valorA = 10.50; // preço de cada unidade do produto A
    float valorB = 20.40; // preço de cada unidade do produto B

    // =========================
    // ESTOQUE MÍNIMO (REGRA)
    // =========================
    unsigned int estoque_minimoA = 500;   // mínimo aceitável para A
    unsigned int estoque_minimoB = 2500;  // mínimo aceitável para B

    // =========================
    // TOTAL EM DINHEIRO (SERÁ CALCULADO)
    // =========================
    double valor_total_A; // vai guardar o total do produto A (estoque * valor)
    double valor_total_B; // vai guardar o total do produto B

    // =========================
    // RESULTADO LÓGICO (0 OU 1)
    // =========================
    int resultadoA, resultadoB; // guarda se tem estoque suficiente (true/false)

    // =========================
    // MOSTRA DADOS DOS PRODUTOS
    // =========================
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    // =========================
    // VERIFICA SE TEM ESTOQUE SUFICIENTE
    // =========================
    resultadoA = estoqueA > estoque_minimoA; // retorna 1 (verdadeiro) ou 0 (falso)
    resultadoB = estoqueB > estoque_minimoB; // mesma coisa para o produto B

    // =========================
    // MOSTRA RESULTADO DA VERIFICAÇÃO
    // =========================
    printf("O produto %s tem estoque suficiente? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque suficiente? %d\n", produtoB, resultadoB);

    // =========================
    // CALCULA VALOR TOTAL EM DINHEIRO
    // =========================
    valor_total_A = estoqueA * valorA; // total do produto A
    valor_total_B = estoqueB * valorB; // total do produto B

    // =========================
    // MOSTRA VALORES TOTAIS
    // =========================
    printf("Total A: R$ %.2f\n", valor_total_A);
    printf("Total B: R$ %.2f\n", valor_total_B);

    // =========================
    // COMPARA QUAL É MAIOR
    // =========================
    if (valor_total_A > valor_total_B) {
        printf("Produto A tem maior valor total\n"); // A é maior
    }
    else if (valor_total_B > valor_total_A) {
        printf("Produto B tem maior valor total\n"); // B é maior
    }
    else {
        printf("Os dois produtos tem o mesmo valor total\n"); // empate
    }

    return 0; // finaliza o programa
}