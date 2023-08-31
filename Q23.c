#include <stdio.h>

int main()  {

    int valor,digitos,valorInvert;
    printf("Digite um caractere: \n");
    scanf("%d",&valor);
    
    while(valor != 0)   {
        digitos = valor % 10;
        printf("%d\n",digitos);
        valorInvert = valorInvert * 10 + digitos;
        valor /= 10;
    }

    printf("%d",valorInvert);
    
    return 0;
}