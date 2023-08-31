#include <stdio.h>

int main()  {

    int horas,minutos,segundos;
    printf("Digite a hora atual no formato H:m:s:\n");
    scanf("%d", &horas);
    scanf(" %d", &minutos);
    scanf(" %d", &segundos);


    printf("%dh:,%dm:,%ds\n",horas,minutos,segundos);
    printf("%d total de segundos",(horas*3600+minutos*60+segundos));
    return 0;
}
