#include <stdio.h>

int main()  {

    short int temperatura;
    printf("Digite a temperatura em °C: \n");
    scanf("%hd",&temperatura);

    printf("%hdF",((9*temperatura+160)/5));

    return 0;
}