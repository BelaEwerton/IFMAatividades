#include <stdio.h>
#include <string.h>

float calcular_media (float nota1, float nota2){
    return (nota1+nota2)/2;
}

void verificar_aprovacao(float media){
    if (media >= 7.0){
        printf ("Aprovado, sua média foi: %.2f\n", media);
        }
    else if (media >= 5.0){
        printf ("Em recuperação, sua média foi: %.2f\n", media);
        }
    else {
        printf ("Reprovado, sua média foi: %.2f\n", media);
        }
}


int main() {
    float nota1, nota2, media;
    
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = calcular_media(nota1, nota2);
    verificar_aprovacao(media);
    
    return 0;
}

