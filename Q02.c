#include <stdio.h>

int main()  {

    int number;

    printf("Digite um valor decimal: ");
    scanf("%d",&number);
    printf("Hexadecimal: %x\n",number);
    printf("Octal: %o\n",number);

    return 0;
}