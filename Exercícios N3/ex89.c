//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int V1[15], V2[15];
    int i, count = 0;

    printf("Digite os 15 números do vetor V1:\n");
    for (i = 0; i < 15; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &V1[i]);
    }

    printf("Digite os 15 números do vetor V2:\n");
    for (i = 0; i < 15; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &V2[i]);
    }

    for (i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            count++;
        }
    }

    printf("Quantidade de números iguais nas mesmas posições: %d\n", count);

    return 0;
}
