#include <stdio.h>

int main(){
    int n1, n2, diferenca;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

diferenca = n1 - n2;

    printf("A diferenca entre %d e %d eh: %d", n1, n2, diferenca);

    return 0;
}