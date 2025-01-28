#include <stdio.h>

int Q3(char *nome, int tamanho, int matricula){
    int inicio = 0, meio, fim = tamanho - 1, pcont = 0;
    char chave = nome[matricula % 10]; // Letra chave baseada no índice
    while (inicio <= fim) {
        pcont++;
        meio = (inicio + fim) / 2;
        if (chave == nome[meio]) 
            break;
        else if (chave < nome[meio]) 
            fim = meio - 1;
        else 
            inicio = meio + 1;
    }
    return pcont;
}

int main() {
    // Nome completo em ordem alfabética com espaços no início
    char nome[] = "  aaaadeeeeefiilmnrrrry"; 
    int tamanho = sizeof(nome) / sizeof(nome[0]) - 1; // Tamanho da string (excluindo '\0')
    int matricula, passos;

    // Entrada da matrícula
    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    // Chamada da função Q3
    passos = Q3(nome, tamanho, matricula);

    // Exibição do resultado
    printf("Número de passos na busca binária: %d\n", passos);

    return 0;
}