#include <stdio.h>

int main(){ 
    float resultado;
    int opcao;

    printf ("Escolha a medida desejada: \n");
    printf ("1 - para A0\n");
    printf ("2 - para A1\n"); 
    printf ("3 - para A2\n");
    printf ("4 - para A3\n"); 
    printf ("5 - para A4\n"); 
    printf ("6 - para A5\n");
    printf ("7 - para A6\n"); 

    printf ("Digite sua opcao: \n");
    scanf ("%d", &opcao);
  
    switch (opcao) {
    case 1:
        resultado = opcao * 1;
        printf("Tamanho %2d- A0 em mm = 841x1189  e cm = 84,1x118,9 \n", resultado);
        break;     

    case 2:
        resultado = opcao * 1;
        printf("Tamanho %2d- A1 em mm = 594x841  e cm = 59,4x84,1\n", resultado);
        break;     
    
    case 3:
        resultado = opcao * 1;
        printf("Tamanho %2d- A2 em mm = 420x594 e cm = 42x59,4\n",  resultado);
        break;

    case 4:
        resultado = opcao * 1;
        printf("Tamanho %2d- A3 em mm = 297x420 e cm = 29,7x42\n", resultado);
        break;  

    case 5:
        resultado = opcao * 1;
        printf("Tamanho %2d- A4 em mm = 210x297 e cm = 21x29,7\n", resultado);
        break;    

    case 6:
        resultado = opcao * 1;
        printf("Tamanho %2d- A5 em mm = 148x210 e cm = 14,8x21 \n", resultado);
        break;    

    case 7:
        resultado = opcao * 1;
        printf("Tamanho %2d- A6 em mm = 105x148 e cm = 10,5x14,8\n", resultado);
        break;      
     

    default:
    printf("Opcao invalida! Tente novamente.\n");
     
    }
return 0;
}