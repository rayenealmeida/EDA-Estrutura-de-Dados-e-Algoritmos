#include <stdio.h>
#include <stdlib.h>

// Declaração da função Q1
int Q1(int valor) {
    int *ptr, *pnumeros, pn = valor % 10, pp, psoma = 0;
    if (pn < 2) pn = 5 - pn;
    pnumeros = (int*)malloc(pn * sizeof(int));
    ptr = pnumeros;
    for (pp = 0; pp < pn; pp++) {
        *ptr = valor % 10;
        valor = valor / 10;
        ptr++;
    }
    for (pp = 0; pp < pn; pp++) {
        if ((pnumeros[pp] % 2) == 1)
            psoma = psoma + pnumeros[pp];
    }
    free(pnumeros); // Libera a memória alocada
    return psoma;
}

// Função principal
int main() {
    int matricula;
    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    int resultado = Q1(matricula);
    printf("A soma dos números ímpares processados é: %d\n", resultado);

    return 0;
}
