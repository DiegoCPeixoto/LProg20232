#include <stdio.h>

int main()  {

    signed int value0;
    printf("Digite um valor inteiro: \n");
    scanf("%d",&value0);

    (value0 % 2 == 0)? printf("O número é par\n"): printf("O número é impar\n");

    return 0;
}
