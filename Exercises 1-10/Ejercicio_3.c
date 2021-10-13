#include<stdio.h>

int main(void){
	
	float angulo1,angulo2,angulo3;
	
	printf("Ingrese valor del primer angulo:"); scanf("%f",&angulo1);
	printf("Ingrese valor del segundo angulo:"); scanf("%f",&angulo2);	
	printf("Ingrese valor del tercer angulo:"); scanf("%f",&angulo3);
	
	if(angulo1>0 && angulo2>0 && angulo3>0){
		
		printf("\nSu triangulo es un:\n");
		
		if(angulo1==angulo2 && angulo2==angulo3){
			printf("Triangulo equilatero");
		}
		else if(angulo1==angulo2 && angulo2!=angulo3 || angulo1==angulo3 && angulo2!=angulo3 || angulo2==angulo3 && angulo1!=angulo3){
			printf("Triangulo isoseles");
		}
		else if(angulo1!=angulo2 && angulo2!=angulo3 && angulo1!=angulo3){
			printf("Triangulo escaleno");
		}
	}
	else{
		printf("\nIngrese solo angulos positivos\n");
	}

	return 0;
}
