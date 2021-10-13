#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void){

	int n,i;
	double *vector;
	double media=0.0,suma=0.0,sumatoria=0.0,desviacion=0.0;
	
	printf("Ingrese tamaño de vector: "); scanf("%d", &n); printf("\n");
	
	if(n>1){
		
		vector=(double *)malloc(n*sizeof(double));
		
		for(i=0;i<n;i++){
			printf("Ingrese valor para [%d]: ",i); scanf("%lf",&vector[i]);
		}
		
		for(i=0;i<n;i++){
			suma+=vector[i];
		}
		
		media=suma/n;
		
		for(i=0;i<n;i++){
			sumatoria+=pow(vector[i]-media,2.0);
		}
		
		desviacion=pow(sumatoria/(n-1.0),(1.0/2.0));
		
		printf("\nLa media es: %lf\n",media);
		printf("\nLa desviacion estandar es: %lf\n",desviacion);
		
		free(vector);
	}
	else{
		printf("\nIngrese un tamaño de vector valido\n");
	}
	
	return 0;
}
