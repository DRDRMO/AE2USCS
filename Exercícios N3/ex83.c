//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    int numeros[20];
    int i;

    printf("Digite os 20 n�meros:\n");
    for (i = 0; i < 20; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

  
    printf("\nN�meros lidos na ordem inversa:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
