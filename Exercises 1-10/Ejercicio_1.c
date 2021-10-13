#include<stdio.h>
#include<math.h>
#define euler 2.7182

int main(void){
	
	float a,b;
	float resta=0.0,suma=0.0,producto=0.0,cociente=0.0;
	float logaritmo=0.0,potencia=0.0,xeuler=0.0,raiz=0.0;
	
	printf("Ingrese un valor: "); scanf("%f",&a); printf("\n");
	printf("Ingrese otro valor: "); scanf("%f",&b);	printf("\n");

	suma=a+b;
	resta=a-b;
	producto=a*b;
	cociente=a/b;
	logaritmo=log10(a);
	potencia=pow(a,b);
	xeuler=pow(euler,a);
	raiz=pow(a,1/b);
	
	printf("1. Suma a+b: %.2f\n",suma);
	printf("2. Resta a-b: %.2f\n",resta);
	printf("3. Producto a*p: %.2f\n",producto);
	printf("4. Cociente a/b: %.2f\n",cociente);
	printf("5. Logaritmo base 10 de a: %.2f\n",logaritmo);
	printf("6. Potencia a^b:  %.2f\n",potencia);
	printf("7. Euler^a: %.2f\n",xeuler);
	
	if(raiz>=0){
	printf("8. Raiz b de a: %.2f\n",raiz);	
	}
	else{
		printf("8. Raiz compleja, por favor ingrese valores distintos\n");
	}
	return 0;
}
