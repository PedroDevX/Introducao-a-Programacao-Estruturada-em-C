#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    // Entrada de dados
    printf("Digite seu nome: ");
    scanf("%49s", nome);  // %49s limita a leitura para não ultrapassar o tamanho do array
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Saída de dados
    printf("Olá %s! Você tem %d anos.\n", nome, idade);

    return 0;
}
