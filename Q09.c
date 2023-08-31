#include <stdio.h>

int main()  {

    int value;
    printf("Digite um valor:\n");
    scanf("%d", &value);

    printf("%d\n",(value + 1));
    printf("%d\n",--value);

    return 0;
}