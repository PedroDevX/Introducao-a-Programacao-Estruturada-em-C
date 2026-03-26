#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("O resto da divisão por 3 é: %d\n", numero % 3);

    return 0;
}
