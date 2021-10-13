#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float  funcion(float x){

 return exp(x) + pow(x,3) - 5;
 
}
float derivada_funcion(float x){
	
 return exp(x) + (3*pow(x,2));
 
}
int main(void){

    int i,j,num;
    float vector[100];
    float resultado_1,resultado_2;
    float e;
    
    printf("Seleccione que solucion desea:\n");
    printf("Presione 1 para seleccionar el primero\n");
    printf("Presione 2 para seleccionar el segundo\n");
   	printf("Ejercicio seleccionado:  "); scanf("%d",&num); printf("\n");
    
    switch(num){
    	case 1:
    		printf("i\tResultado\n");
    	   for (i=0;i<101;i++){
    	   		if (i!=0){
					vector[i] = vector[i-1]-(funcion(vector[i-1])/derivada_funcion(vector[i-1]));
	            	resultado_1 = fabs(vector[i] - vector[i-1]);
	        	}
	           else{
	           	   vector[i]=0.0;
				}
	            printf("%d\t%f",i,resultado_1);
	            printf("\n");
			}
		break;
		case 2:
			printf("Ingrese valor para e:  "); scanf("%f",&e); printf("\n");
	    	printf("i\tResultado\n");
	    	
			i=0;  
			int off=0;
			while(off==0){
		       	i++;
	    	   	if (i!=0){
					vector[i] = vector[i-1]-(funcion(vector[i-1])/derivada_funcion(vector[i-1]));
		           	resultado_2 = fabs(vector[i] - vector[i-1]);
		       	}
		        else{
		           	vector[i]=0.0;
				}
				
		    	printf("%d\t%f",i,resultado_2);
		    	printf("\n");
		            
		        if(e>resultado_2){
		           	off=1;
				}	
	        }
		break;
		default: printf("\nIngrese un valor valido\n");
	}
	
	return 0;
}
