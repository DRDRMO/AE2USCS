//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int vetor[20];
    int novoVetor[19];
    int numero;
    int i, j;
    int encontrado = 0;

 
    printf("Digite os 20 números do vetor:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um número a ser verificado: ");
    scanf("%d", &numero);


    for (i = 0, j = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
        } else {
            novoVetor[j] = vetor[i];
            j++;
        }
    }

 
    if (encontrado) {
        printf("\nO número %d existe no vetor.\n", numero);
        printf("Novo vetor (sem o número %d):\n", numero);
        for (i = 0; i < 19; i++) {
            printf("%d ", novoVetor[i]);
        }
        printf("\n");
    } else {
        printf("\nO número %d não existe no vetor.\n", numero);
    }

    return 0;
}
