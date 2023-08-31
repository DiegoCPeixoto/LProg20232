#include <stdio.h>
#include <math.h>

int main()  {

    double x,n,result;
    printf("Digite um valor x: \n");
    scanf("%lf",&x);
    printf("Digite um valor n: \n");
    scanf(" %lf", &n);
    
    result = x*pow(2,n);

    printf("%lf",result);
    
    return 0;
}