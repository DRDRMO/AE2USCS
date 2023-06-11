//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int Q[20];
    int i, menor, posicaoMenor;

   
    for (i = 0; i < 20; i++) {
        do {
            printf("Digite o elemento %d do vetor: ", i+1);
            scanf("%d", &Q[i]);

            if (Q[i] < 0) {
                printf("O número deve ser positivo. Tente novamente.\n");
            }
        } while (Q[i] < 0);
    }

   
    menor = Q[0];
    posicaoMenor = 0;

    for (i = 1; i < 20; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            posicaoMenor = i;
        }
    }

    
    printf("\nMenor elemento do vetor: %d\n", menor);
    printf("Posição do menor elemento no vetor: %d\n", posicaoMenor);

    return 0;
}
