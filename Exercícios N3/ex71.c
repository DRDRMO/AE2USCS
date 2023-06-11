//Nome: Eduardo Felipe Pires Romano - RA: 8138224
//Coment�rio: Fa�a um c�digo que leia certa quantidade de n�meros, apresente a m�dia desses n�meros e indique qual o maior dentre eles

#include <stdio.h>

int main() {
    int quantidade, i;
    float numero, maior, soma, media;

    printf("Digite a quantidade de n�meros a serem lidos: ");
    scanf("%d", &quantidade);

    maior = soma = 0;

    for (i = 1; i <= quantidade; i++) {
        printf("Digite o n�mero %d: ", i);
        scanf("%f", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
        }

        soma += numero;
    }

    media = soma / quantidade;

    printf("O maior n�mero lido �: %f \n", maior);
    printf("A m�dia dos n�meros lidos �: %f \n", media);

    return 0;
}
