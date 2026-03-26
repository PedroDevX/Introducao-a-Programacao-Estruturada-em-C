#include <stdio.h>
int main() {
 int num;
 printf("Digite um numero: "); 
 scanf("%d", &num);
 if (num > 10) {
 printf("Maior que 10\n");
 } else {
 printf("Menor ou igual a 10\n");
 }
 return 0;
} 
