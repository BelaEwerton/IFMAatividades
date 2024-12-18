#include <stdio.h>
float calcular_valor_total(int custo_hora, float horas_trabalhadas){
    if (custo_hora < 0 || horas_trabalhadas <0){
    printf("valores invalidos. Custo por hora e horas trabalhadas devem ser positivos.\n");
    return -1;    
    }
return custo_hora * horas_trabalhadas; 
}

int main(){
    int custo_hora;
    float horas_trabalhadas, valor_total;

    //entrada de dados//
    printf("Digite o custo por hora (em reais): ");
    scanf("%d", &custo_hora);

    printf("Digite o tempo trabalhado (em horas): ");
    scanf("%f", &horas_trabalhadas);

    //calculo do valor total//
    valor_total = calcular_valor_total(custo_hora,horas_trabalhadas);

    //saida formatada//
    printf("O valor total a ser pago é: R$ %2.f\n", valor_total);
}