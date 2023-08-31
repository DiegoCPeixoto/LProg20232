#include <stdio.h>

int main()  {

    short int diasTrabalhados;
    float totalRecebido;
    printf("Digite a quantidade de dias trabalhadas: \n");
    scanf("%hd",&diasTrabalhados);

    if(diasTrabalhados <= 10)   {
        totalRecebido = ("%f",((float)diasTrabalhados)*50.25*0.9);
    
    } else if(diasTrabalhados <= 20)    {
        totalRecebido = ("%f",((float)diasTrabalhados)*50.25*1.2)*0.9;
        
    } else  {
        totalRecebido = ("%f",((float)diasTrabalhados)*50.25*1.2)*0.9;
    }

    printf("O total a ser recebido é:\n %.2f",totalRecebido);

    return 0;
}
