#include <stdio.h>
#include <stdlib.h>

// Declaração da função Q1
int Q1(char *Nome, int qtde) {
    int pc = 0;
    if (*Nome == '\0')
        return qtde;
    while (Nome[pc] != '\0')
        pc++;
    return Q1(Nome + 1, qtde + pc);
}

// Função principal
int main() {
    char nome[100];
    
    printf("Digite um nome ou palavra: ");
    scanf("%s", nome);

    int resultado = Q1(nome, 0);
    printf("O resultado da função é: %d\n", resultado);

    return 0;
}
