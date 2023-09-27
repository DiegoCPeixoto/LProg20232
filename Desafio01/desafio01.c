#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
#define MASK 0xFF

int bit_alto(unsigned char x, int pos) {
    return (x & (1 << pos)) != 0;
}
void deixar_bit_alto(unsigned char *x, int pos) {
    *x = *x | (1 << pos);
}
void deixar_bit_baixo(unsigned char *x, int pos) {
    *x = *x & ~(1 << pos);
}

int contar_bits_alto(unsigned char x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int escolher_armario(unsigned char x) {
    int r = rand() % N;
    if (bit_alto(x, r)) {
        for (int i = 0; i < N; i++) {
            r = (r + 1) % N;
            if (!bit_alto(x, r)) {
                return r;
            }
        }
    }
    return r;
}

void mostar_armarios(unsigned char x) {

    printf("Armários ocupados: ");

    for (int i = 0; i < N; i++) {
        if (bit_alto(x, i)) {
            printf("%d ", i + 1);
        }
    }

    printf("\n");
    printf("Armários livres: ");

    for (int i = 0; i < N; i++) {
        if (!bit_alto(x, i)) {
            printf("%d ", i + 1);
        }
    }

    printf("\n");
}

int main() {

    srand(time(NULL));
    
    unsigned char control = 0;
    int option;
    int pos;

    while (1) {
        printf("Escolha uma opção:\n");
        printf("1. Ocupar armário.\n");
        printf("2. Liberar armário.\n");
        printf("3. Sair.\n");
        scanf("%d", &option);

        switch (option) {

            case 1:
                if (control != MASK) {
                    pos = escolher_armario(control);
                    deixar_bit_alto(&control, pos);
                    printf("O armário %d foi ocupado.\n", pos + 1);

                } else {
                    printf("Não há armários disponíveis.\n");

                }
                break;

            case 2:
                printf("Digite a posição do armário a ser liberado: ");
                scanf("%d", &pos);

                if (pos >= 1 && pos <= N && bit_alto(control, pos - 1)) {
                    deixar_bit_baixo(&control, pos - 1);
                    printf("O armário %d foi liberado.\n", pos);

                } else {
                    printf("Posição inválida ou armário livre.\n");

                }
                break;
            case 3:
                return 0;
            default:
                printf("Opção inválida.\n");
        }

        mostar_armarios(control);
    }
}
