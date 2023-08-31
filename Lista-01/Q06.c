#include <stdio.h>

int main()  {

    float height;
    char sexo;
    printf("Digite sua altura em metros: \n");
    scanf(" %f" , &height);
    printf("Digite seu sexo m(masculino) ou f(feminino)): \n");
    scanf(" %c" , &sexo);

    if(sexo == 'm')   {
        printf("%.2f\n",height*72.7-58);

    } else    {
        printf("%.2f\n",height*62.1-44.7);
    }
    return 0;
}
