#include <stdio.h>

int main()  {

    short int valor0,valor1;
    printf("Digite dois valores: \n");
    scanf("%hd",&valor0);
    scanf("%hd",&valor1);

    printf("%i,%i,%i,%i,%i,",(valor0+valor1),(valor0*valor1),(valor0-valor1),(valor0/valor1),(valor0%valor1));

    return 0;
}
