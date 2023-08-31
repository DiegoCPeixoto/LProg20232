#include <stdio.h>

int main()  {

    short int a,b;
    printf("Digite dois valores: \n");
    scanf("%hd",&a);
    scanf("%hd",&b);

    a = a - b;
    b = b + a;
    a = b - a;

    printf("Valor de a agora é: %hd \n",a);
    printf("Valor de b agora é: %hd \n",b);
    return 0;
}