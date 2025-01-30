#include <stdio.h>

char letra(int P)
{
    P = P % 26; // 78/26, 26+26 = 52 + 26 = 78
    return 'a' + P; // 'a' + 0 = a;
}

int Q2(char *nc, int matricula)
{
    int p = 0, posic = -1;
    char chave = letra(matricula % 100); 
    printf("Chave gerada: %c\n", chave);  // Exibe o caractere gerado
    while(nc[p] != '\0'){
        if(chave == nc[p])
            posic = p;
        p++;
    }
    return posic;
}

int main()
{
    char nome[] = "maria";
    int matricula = 123456; // Exemplo de matrícula

    int posicao = Q2(nome, matricula);
    printf("Posição do caractere no nome: %d\n", posicao);

    return 0;
}
