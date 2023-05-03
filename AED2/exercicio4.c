//O programa foi feito com um código em loop do/while que permite que o usuário escolha a operação a ser realizada (deposito, saque ou ver saldo). Junto com isso foi colocado um switch para que no final venham as opções de continuar ou encerrar o programa.

#include <stdio.h>

float saldo = 0;

void deposito() {
    float valor_deposito;
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valor_deposito);
    saldo += valor_deposito;
    printf("Depósito realizado com sucesso! \n");
}

void saque() {
    float valor_saque;
    printf("Digite o valor a ser sacado: R$ ");
    scanf("%f", &valor_saque);
    if (valor_saque > saldo) {
        printf("Saldo insuficiente! \n");
    } else {
        saldo -= valor_saque;
        printf("Saque realizado com sucesso! \n");
    }
}

void ver_saldo() {
    printf("Seu saldo é: R$ %.2f\n", saldo);
}

int main() {
    int opcao;
    do {
        printf("\nEscolha uma opção: \n");
        printf("1 - Deposito. \n");
        printf("2 - Saque. \n");
        printf("3 - Ver Saldo. \n");
        printf("0 - Sair. \n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                ver_saldo();
                break;
            case 0:
                printf("Até breve! \n");
                break;
            default:
                printf("Opção inválida! \n");
                break;
        }
    } while (opcao != 0);
    return 0;
}


