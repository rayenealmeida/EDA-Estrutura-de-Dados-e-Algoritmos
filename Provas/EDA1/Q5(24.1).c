#include <stdio.h>

int Q5(char vetor[], int tamanho){
    int trocas = 0, j , i;
    char chave;
    for (i = 1; i < tamanho; i++) {
        chave = vetor[i];
        j = i - 1;
        printf("%d, %d, %c\n", i, j, chave); // Exibe o índice atual, o anterior e a chave

        while (j >= 0 && vetor[j] > chave) { 
            printf("%s\n", vetor); // Exibe o vetor antes da troca
            vetor[j + 1] = vetor[j]; // Move o elemento para a posição à frente
            printf("%s\n", vetor); // Exibe o vetor após a troca
            j--; 
            trocas++; // Conta o número de trocas realizadas
        }
        vetor[j + 1] = chave; // Coloca a chave na posição correta
        printf("%s\n\n", vetor); // Exibe o vetor após a inserção da chave
    }
    return trocas; // Retorna o número total de trocas
}

int main() {
    char nome[] = "acdbef"; // Nome (ou lista de caracteres) para ordenação
    int tamanho = sizeof(nome) / sizeof(nome[0]) - 1; // Calcula o tamanho da string (desconsiderando o '\0')
    int trocas;

    // Exibe o vetor antes da ordenação
    printf("Antes da ordenação: %s\n", nome);

    // Chama a função Q5 para ordenar o vetor
    trocas = Q5(nome, tamanho);

    // Exibe o vetor após a ordenação
    printf("Depois da ordenação: %s\n", nome);

    // Exibe o número total de trocas feitas durante a ordenação
    printf("Número de trocas: %d\n", trocas);

    return 0;
}