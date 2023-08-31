#include <stdio.h>

int main()  {

    int comprimento,altura,largura,volume;
    printf("Digite o comrprimento a altura e a largura da caixa:\n");
    scanf("%d", &comprimento);
    scanf(" %d", &altura);
    scanf(" %d", &largura);
    
    volume = comprimento*altura*largura;
    printf("%d", volume);

    return 0;
}
