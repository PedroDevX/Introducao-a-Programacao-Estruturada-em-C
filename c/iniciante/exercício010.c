#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d é maior que %d\n", n1, n2);
    } else if (n2 > n1) {
        printf("%d é maior que %d\n", n2, n1);
    } else {
        printf("Os dois números são iguais\n");
    }

    return 0;
}
