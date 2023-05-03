// calculo do diametro de um circulo (pi raio ao quadrado).

#include <stdio.h>

float AreaCirc(float PI, float raio){
    return PI*(raio*raio); 
}


int main()
{
    float PI = 3;  
    float raio = 6; 
    float area = AreaCirc(PI,raio);
    
    printf("Area: %0.2f", area);
    
    
    return 0; 
}
