#include<stdio.h>

int main(void){
	
	int i,j;
	float matriz[3][3];
	
	printf("Ingrese valores de la matriz 3x3:\n");
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Coordenada [%d][%d] : ",i,j); scanf("%f",&matriz[i][j]);
		}
	}
	
	printf("\nSu matriz ingresada es: \n");
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%.2f\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSu transpuesta es:\n");
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%.2f\t",matriz[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
