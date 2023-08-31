#include <stdio.h>

int main()  {

    signed int value0,value1;
    printf("Digite um valor inteiro: \n");
    scanf("%d",&value0);
    scanf(" %d", &value1);

    (value0 % value1 == 0)? printf("%d É multiplo de %d\n",value0,value1): printf("%d Não é multiplo de %d\n",value0,value1);

    return 0;
}