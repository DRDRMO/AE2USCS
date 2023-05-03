//Crie uma func¸a~o que determine se dado caracter esta´ entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.  


#include <stdio.h>
#include <ctype.h>

char c;

char verCaracter(char c){
    int tipo; 
    tipo = isalpha(c);
    if (tipo==0){
        printf(" Não"); 
    }else{
        printf(" Sim"); 
    }
}

int main()
{
    printf("\nDigite a letra: ");
    scanf("%c",&c);
    printf("Letra: '%c' esta entre 'A' e 'Z'?",c);
    verCaracter(c);
    
    return 0; 
}
