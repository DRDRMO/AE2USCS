//Nesse c�digo, a diferen�a � representada pelo sinal de menos (-) e recebe 2 dados do tipo INT. Caso o primeiro n�mero seja maior, ele exibe o resultado, sen�o, ele avisa que n�o foi poss�vel realizar a conta.


#include <stdio.h>

int diferenca(int num1, int num2) {
  return num1 - num2;
}

int main() {
  int num1, num2, result;

  printf("Digite o primeiro n�mero: ");
  scanf("%d", &num1);

  printf("Digite o segundo n�mero: ");
  scanf("%d", &num1);

    (result = num1 - num2);

if (result >= 0) {
     printf("A diferen�a entre %d e %d �: %d\n", num1, num2, result);
} else {
    printf("N�o � poss�vel realizar essa conta.");
}

  return 0;
}
