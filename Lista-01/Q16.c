#include <stdio.h>

int main()  {

    float  horaAula,diasTrabalhados,totalLiquido,totalBruto;
    printf("Digite o valor da hora/aula: ");
    scanf("%f",&horaAula);
    printf("Digite a quantidade de dias trabalhadas: ");
    scanf("%f",&diasTrabalhados);

    totalBruto = horaAula*diasTrabalhados;
    totalLiquido = totalBruto*0.92; // 8% para INSS

    printf("O salario bruto é: %.2f\nO total líquido é: %.2f", totalBruto,totalLiquido);

    return 0;
}
