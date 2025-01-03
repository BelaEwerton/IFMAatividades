#include <stdio.h>

int main(){ 
    float resultado;
    int opcao;

    printf ("Escolha a medida desejada: \n");
    printf ("1 - feed instagram\n");
    printf ("2 - story instagram\n"); 
    printf ("3 - reels instagram\n");
    printf ("4 - feed facebook\n"); 
    printf ("5 - story facebook\n"); 
    printf ("6 - capa facebook\n");
    printf ("7 - capa YouTube\n"); 
    printf ("8 - avatar YouTube\n"); 

    printf ("Digite sua opcao: \n");
    scanf ("%d", &opcao);
  
    switch (opcao) {
    case 1:
        resultado = opcao * 1;
        printf("Formato %2d- feed para instagram = 1080 x 1080px (quadrado) ou 1080 x 566px (horizontal) ou 1080 x 1350px (vertical)\n", resultado);
        break;     

    case 2:
        resultado = opcao * 1;
        printf("Formato %2d- story instagram = 1080 x 1920px \n", resultado);
        break;     
    
    case 3:
        resultado = opcao * 1;
        printf("Formato %2d- reels instagram = MP4 1080 x 1920px ou 9:16 \n",  resultado);
        break;

    case 4:
        resultado = opcao * 1;
        printf("Formato %2d- feed facebook = 1080 x 1080px (quadrado) ou 1080 x 1350px (vertical)\n", resultado);
        break;  

    case 5:
        resultado = opcao * 1;
        printf("Formato %2d- story facebook = 1080 x 1920px\n", resultado);
        break;    

    case 6:
        resultado = opcao * 1;
        printf("Formato %2d- capa facebook = 851 x 315px com maximo 100 kb \n", resultado);
        break;    

    case 7:
        resultado = opcao * 1;
        printf("Formato %2d- capa YouTube = 2560 x 1440px\n", resultado);
        break;      

    case 8:
        resultado = opcao * 1;
        printf("Formato %2d- avatar YouTube = 800 x 800px\n", resultado);
        break;    
     

    default:
    printf("Opcao invalida! Tente novamente.\n");
     
    }
return 0;
}