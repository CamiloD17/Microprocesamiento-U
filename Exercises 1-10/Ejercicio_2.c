#include<stdio.h>

int main(void){
	
	float valor1,valor2,valor3,valor4;
	float suma=0.0;
	
	printf("Ingrese valor 1. : "); scanf("%f",&valor1);
	printf("Ingrese valor 2. : "); scanf("%f",&valor2);
	printf("Ingrese valor 3. : "); scanf("%f",&valor3);
	printf("Ingrese valor 4. : "); scanf("%f",&valor4);
	
	suma=valor1+valor2+valor3+valor4;
	
	printf("\n(%.2f) + (%.2f) + (%.2f) + (%.2f) = %.2f ",valor1,valor2,valor3,valor4,suma);
	
	return 0;
}
