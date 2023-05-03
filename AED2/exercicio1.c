//Nesse código, a diferença é representada pelo sinal de menos (-) e recebe 2 dados do tipo INT. Caso o primeiro número seja maior, ele exibe o resultado, senão, ele avisa que não foi possível realizar a conta.


#include <stdio.h>

int diferenca(int num1, int num2) {
  return num1 - num2;
}

int main() {
  int num1, num2, result;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num1);

    (result = num1 - num2);

if (result >= 0) {
     printf("A diferença entre %d e %d é: %d\n", num1, num2, result);
} else {
    printf("Não é possível realizar essa conta.");
}

  return 0;
}
