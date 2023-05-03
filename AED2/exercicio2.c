#include <stdio.h>

float div(int num1, int num2) {
        return num1 / num2;
}

int main() {
    int a = 20;
    int b = 5;
    float result;
    
    result = div(a,b);
    if (b == 0) {
        printf("Valor não pode ser dividido por 0\n");
    }else{
        printf("Resultado: %f\n", result);
    }
    
    return 0;
}
