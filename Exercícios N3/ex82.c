//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int A[10];
    int X;
    int M[10];
    int i;

   
    printf("Digite os 10 elementos do vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite o valor de X: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    printf("\nVetor M:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}
