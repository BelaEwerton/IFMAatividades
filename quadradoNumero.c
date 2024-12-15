#include <stdio.h>

int main(){
    int n, quadrado;
    printf("Digite um numero: ");
    scanf("%d", &n);

quadrado = n*n;

    printf("O quadrado de %d = %d", n, quadrado);
    printf("\nQuadrado %d", (n*n));

    return 0;
}