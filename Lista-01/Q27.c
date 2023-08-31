#include <stdio.h>
#include <math.h>

int main()  {

    float x1,x2,x3,mediaA,mediaG;
    printf("Digite um valor para x1: ");
    scanf("%f",&x1);
    scanf("%f",&x2);
    scanf("%f",&x3);

    mediaA = (x1+x2+x3)/3;
    mediaG = cbrt(x1*x2*x3);

    printf("%.2f\n",mediaA);
    printf("%.2f\n",mediaG);


    return 0;
}
