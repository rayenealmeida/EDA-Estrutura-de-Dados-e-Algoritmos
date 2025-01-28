#include <stdio.h>
// Função Q4
int Q4(char *vet, int count){
    int pcont = 0;
    char aux;
    for (int i = 0; i < count; i++)
        for (int j = i + 1; j < count; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i]; vet[i] = vet[j]; vet[j] = aux;
                pcont++;
            }
        }
    return pcont;
}

// Função principal
int main() {
    // Vetor com os caracteres do nome
    char nome[] = "maria";
    
    // Contagem de caracteres (tamanho da string)
    int count = sizeof(nome) / sizeof(nome[0]) - 1; // Exclui o '\0'

    // Exibindo o nome original
    printf("Nome original: %s\n", nome);

    // Chamada da função Q4 para ordenar o vetor
    int R = Q4(nome, count);

    // Exibindo o número de trocas realizadas (R)
    printf("Número de trocas (R): %d\n", R);
    printf("Nome ordenado: %s\n", nome);

    return 0;
}