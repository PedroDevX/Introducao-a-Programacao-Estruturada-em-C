#include <stdio.h>

int main() {
    int numero;
    float resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Conversão de tipo
    resultado = (float)numero;

    printf("O número em float é: %.2f\n", resultado);

    return 0;
}
