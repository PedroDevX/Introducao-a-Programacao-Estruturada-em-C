#include <stdio.h>

int main() {
    int n1, n2, n3;
    int resultado;

    printf("Digite três números inteiros separados por espaço: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    resultado = (n1 + n2) * n3;

    printf("O resultado da expressão (n1 + n2) * n3 é: %d\n", resultado);

    return 0;
}
