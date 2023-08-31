#include <stdio.h>

int main()  {

    float cotacao,valor;
    printf("Digite a cotaçção do dolar e o valor a ser convertido\n");
    scanf("%f", &cotacao);
    scanf("%f",&valor);

    printf("%.2f",(cotacao*valor));

    return 0;
}