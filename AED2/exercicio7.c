//Receber um valor e fazer ele ao cubo.

#include <stdio.h>

int cubo(int valor){
    return valor*valor*valor; 
}

int main()
{
    int valor; 
    
    printf("\n Digite o valor: ");
    scanf("%d",&valor);
    
    printf("\n result: %d", cubo(valor)); 
    
}
