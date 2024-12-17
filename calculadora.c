#include <stdio.h>

int main(){ 
    float x, y;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

        if (op == '+'){
            printf("Resultado: %.2f\n", x + y);
            }
            else if (op == '-'){ 
            printf("Resultado: %.2f\n", x - y);
            }
            else if (op == '*'){ 
             printf("Resultado: %.2f\n", x * y);
            }
            else if (op == '/'){ 
                if (y!= 0){
                    printf("Resultado: %2f\n", x / y);
                }
                else {
                    printf("Erro: divisao por zero!\n");
                }
            }
            else { 
                printf("Operador invalido!\n");
            }      
    return 0;
}
