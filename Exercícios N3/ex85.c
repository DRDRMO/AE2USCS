//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int A[N];
    int B[N];
    int Soma[N];
    int i;

    printf("\nDigite os elementos do vetor A:\n");
    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os elementos do vetor B:\n");
    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    printf("\nVetor Soma:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", Soma[i]);
    }
    printf("\n");

    return 0;
}
