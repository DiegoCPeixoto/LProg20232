#include <stdio.h>

int main()  {

    float conta;
    printf("Digite o valor da conta: \n");
    scanf(" %f" , &conta);
    printf("O valor da conta com a taxa é: R$ %.2f", conta*1.1);

    return 0;
}