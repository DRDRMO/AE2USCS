//Nome: Eduardo Felipe Pires Romano - RA: 8138224
//Comentário: Faça um código que leia certa quantidade de números, apresente a média desses números e indique qual o maior dentre eles

#include <stdio.h>

int main() {
    int quantidade, i;
    float numero, maior, soma, media;

    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &quantidade);

    maior = soma = 0;

    for (i = 1; i <= quantidade; i++) {
        printf("Digite o número %d: ", i);
        scanf("%f", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
        }

        soma += numero;
    }

    media = soma / quantidade;

    printf("O maior número lido é: %f \n", maior);
    printf("A média dos números lidos é: %f \n", media);

    return 0;
}
