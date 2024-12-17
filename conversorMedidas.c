#include <stdio.h>

int main(){ 
    float medida, resultado;
    int opcao;

    printf ("Escolha a conversao desejada: \n");
    printf ("1 - Metros para Centimetros\n");
    printf ("2 - Metros para Milimetros\n"); 
    printf ("3 - Centimetros para Milimetros\n");
    printf ("4 - Centimetros para Metros\n"); 
    printf ("5 - Milimetros para Centimetros\n");
    printf ("6 - Milimetros para Metros\n");

    printf ("Digite sua opcao: \n");
    scanf ("%d", &opcao);

    printf ("Digite a medida: ");
    scanf ("%f", &medida);

    switch (opcao) {
    
    case 1:
        resultado = medida * 100;
        printf("%2f Metros = %2f Centimetros\n", medida, resultado);
        break;

    case 2:
        resultado = medida * 1000;
        printf("%2f Metros = %2f Milimetros\n", medida, resultado);
        break;  

    case 3:
        resultado = medida * 100;
        printf("%2f Centimetros = %2f Milimetros\n", medida, resultado);
        break;    

    case 4:
        resultado = medida / 10;
        printf("%2f Centimetros = %2f Metros\n", medida, resultado);
        break;      
    
    case 5:
        resultado = medida / 10;
        printf("%2f Milimetros = %2f Centimetros\n", medida, resultado);
        break; 

    case 6:
        resultado = medida / 100;
        printf("%2f Milimetros = %2f Metros\n", medida, resultado);
        break;     

    default:
    printf("Opcao invalida! Tente novamente.\n");
     
    }
return 0;
}