//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int vetor[30];
    int i, numero, count = 0;

    printf("Digite 30 n�meros:\n");
    for (i = 0; i < 30; i++) {
        printf("Digite o n�mero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um n�mero de verifica��o para o vetor: ");
    scanf("%d", &numero);

    for (i = 0; i < 30; i++) {
        if (vetor[i] == numero) {
            count++;
        }
    }

    printf("O n�mero %d aparece %d vezes no vetor.\n", numero, count);

    return 0;
}
