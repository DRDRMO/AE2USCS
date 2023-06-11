//Eduardo Felipe Pires Romano - RA: 8138224

#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int numFilhos, totalHabitantes = 0, totalFilhos = 0, totalSalarioMenor150 = 0;

    while (1) {
        printf("Digite o sal�rio do habitante (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o n�mero de filhos do habitante: ");
        scanf("%d", &numFilhos);

        somaSalario += salario;
        totalFilhos += numFilhos;
        totalHabitantes++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario < 150.0) {
            totalSalarioMenor150++;
        }
    }

    if (totalHabitantes > 0) {
        float mediaSalario = somaSalario / totalHabitantes;
        float mediaFilhos = (float) totalFilhos / totalHabitantes;
        float percentualSalarioMenor150 = (float) totalSalarioMenor150 / totalHabitantes * 100.0;

        printf("\nM�dia de sal�rio da popula��o: %.2f\n", mediaSalario);
        printf("M�dia do n�mero de filhos: %.2f\n", mediaFilhos);
        printf("Maior sal�rio dos habitantes: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com sal�rio menor que R$ 150,00: %.2f%%\n", percentualSalarioMenor150);
    } else {
        printf("\nNenhum habitante registrado.\n");
    }

    return 0;
}
