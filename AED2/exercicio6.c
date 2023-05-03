//Escreva um programa que implemente uma func¸a~o que passe dado nu´mero inteiro como para^metroe este desenhe um nu´mero equivalente a “*” na tela.

#include <stdio.h>

void Num(int numero){
    int i; 
    if(numero<=0){
        printf("Numero invalido. \n");
    }else{
        for (i=0;i<numero;i++){
            printf("*"); 
        }
    }
}

void main(){
    
    int numero; 
    
    printf("\nDigite um numero inteiro: "); 
    scanf("%d",&numero);
    
    printf("O numero %d resulta em: ",numero); 
    Num(numero);
    
}
