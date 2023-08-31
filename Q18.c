#include <stdio.h>

int main()  {

    int raio;
    printf("Digite o valor do raio: ");
    scanf("%d",&raio);
    printf("O diâmetro do círculo é: %.2f",(2*3.14159*raio));

    return 0;
}