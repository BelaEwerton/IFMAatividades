#include <stdio.h>

int main(){
    int num;

    printf("Informe o numero para ver a sua tabuada de multiplicacao: ");
    scanf("%d", &num);

    printf("A tabuada de %d sera:\n");
    int i = 0;
    for(i; i<=10; i++){
        printf("%d x %d = %d", num, i, num*i);

    }

}