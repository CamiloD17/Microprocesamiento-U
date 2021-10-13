#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void intercambia(float *x, float *y) 
{	
    float z; 
    z = *x; 
    *x = *y; 
    *y = z; 
} 

int main(void){
	
	int i,j,n,k;
	
	printf("Ingrese el tamaño del vector:  "); scanf("%d",&n); 
	
	if(n>1){
		
		float vector[n];
		
		for(i=0;i<n;i++){		
			printf("Ingrese valor en la posicion [%d]: ",i); scanf("%f",&vector[i]);	
		}
			
		printf("\nVector Ingresado:\t\t[");	
		for(i=0;i<n;i++){
			
			printf(" %.2f ",vector[i]);
				
		}
		printf("]\n\n");
		
		for(i=0;i<=n-2;i++){
			for(j=0;j<=n-2;j++){
				
				printf("Comparando %.2f con %.2f \n",vector[j],vector[j+1]);
				
				if(vector[j]>vector[j+1]){
					
					intercambia(&vector[j],&vector[j+1]);
					
					printf("SI hubo intercambio");
					printf("\t\t[");
					
						for(k=0;k<n;k++){
							
							printf(" %.2f ",vector[k]);
							
						}
						printf("]\n\n");
				}	
				else{
					printf("NO hubo intercambio");
					printf("\t\t[");
					for(k=0;k<n;k++){
						printf(" %.2f ",vector[k]);
					}
					printf("]\n\n");
				}
			}
		}
		
		printf("\nBubble Sort: \t\t\t[");
		
		for(i=0;i<n;i++){	
			printf(" %.2f ",vector[i]);	
		}
		printf("]");
	}
	else{	
		printf("\nIngrese correctamente el tamaño del vector.\n");	
	}
	
	return 0;
}
