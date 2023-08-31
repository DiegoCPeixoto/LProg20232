#include <stdio.h>

int main()  {

    signed int value0;
    printf("Digite um valor inteiro: \n");
    scanf("%d",&value0);

    (value0 < 0)? printf("%d",value0*(-1)): printf("%d",value0);

    return 0;
}
