#include <stdio.h>

int main()  {

    int segTotais,horas,minutos,segundos;
    printf("Digite os segundos: \n");
    scanf("%d",&segTotais);

    while(segTotais >= 3600) {
        segTotais = segTotais - 3600;
        horas++;
    }

    while(segTotais >= 60) {
        segTotais = segTotais - 60;
        minutos++;
    }

    while(segTotais > 0) {
        segTotais = segTotais - 1;
        segundos++;
    }

    printf("%d hora,%d minutos,%d segundos",horas,minutos,segundos);

    return 0;
}
