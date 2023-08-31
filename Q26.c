#include <stdio.h>
#include <math.h>

int main()  {

    int x1,y1,x2,y2;
    float d;
    printf("Digite um valor para x1: ");
    scanf("%d",&x1);

    printf("Digite um valor para x2: ");
    scanf("%d",&x2);

    printf("Digite um valor para y1: ");
    scanf("%d",&y1);

    printf("Digite um valor para y2: ");
    scanf("%d",&y2);

    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("%f",d);

    return 0;
}