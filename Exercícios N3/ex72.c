//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int codigo, i;
    float preco, maior = 0, soma = 0;

    for (i = 1; i <= 15; i++) {
        printf("Digite o c�digo do produto %d: ", i);
        scanf("%d", &codigo);

        printf("Digite o pre�o do produto %d: ", i);
        scanf("%f", &preco);

        soma += preco;

        if (preco > maior) {
            maior = preco;
        }
    }

    printf("O maior pre�o lido foi: %.2f\n", maior);
    printf("A m�dia aritm�tica dos pre�os �: %.2f\n", soma / 15);

    return 0;
}
