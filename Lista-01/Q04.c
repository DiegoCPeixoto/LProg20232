#include <stdio.h>

int main()  {

    int number;
    printf("Digite um número inteiro: ");
    scanf("%d", &number);
    printf("%.2f,\n%.2f,\n%.2f,\n",(((float)number)*3),((float)number)*4,((float)number)/2);

    return 0;
}
