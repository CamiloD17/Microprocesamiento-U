#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	
	int iter;
	float derivada_x0,derivada_x1,alfa; 
	int inciso;
	float  x0[2]={0.5 , 0.5};
	
	printf("Ingrese que inciso desea realizar (1,2 o 3):  ");scanf("%d",&inciso);printf("\n");
	if(inciso==1|inciso==2|inciso==3){
		printf("Ingrese cantidad de iteraciones:  ");scanf("%d",&iter);printf("\n");
	}
	float funcion[iter],x[iter][2],gradiente[iter][2];
	
	switch(inciso){
		case 1:
			alfa=0.01;
		break;
		case 2:
			alfa=0.035;
		break;
		case 3:
			alfa=0.001;
		break; default: printf("\nIngrese un valor valido\n");
	}
	if(inciso==1 | inciso==2){
			
		int i,j;
		for(i=0; i<iter;i++){
				
			if(i!=0){
					
			x0[0]=x[i-1][0];
		 	x0[1]=x[i-1][1];
		  	derivada_x0=2.0*x0[0];
			derivada_x1=50.0*x0[1];
	       	}		
						
			gradiente[i][0]=derivada_x0;
			gradiente[i][1]=derivada_x1;
				
			x[i][0]=x0[0]-alfa*gradiente[i][0];
			x[i][1]=x0[1]-alfa*gradiente[i][1];
				
			funcion[i]=pow(x[i][0],2.0)+25*pow(x[i][1],2.0);
		}		
		 
		printf("\nk     XK\tXK\t\tgk\t\tgk\t\tF(x) \n\n");
		
		for(i=0; i<iter; i++){
				
			printf("%d. ",i);
			for(j=0; j<=1; j++){	
				printf(" %f \t", x[i][j]);
		    }
			for( j=0; j<=1; j++){
				printf(" %f\t", gradiente[i+1][j]);	
		  	}
		    printf(" %f \n", funcion[i]);
					
		}	     
 	}
 	else if(inciso==3){	
 	
		int i;
		float x0[iter],g[iter],fx[iter];
	 	printf("I\tUnidades\tDolares\n\n");
		for(i=0;i<iter;i++){
			
			if(i==0){
				x0[i]=300;
				g[i]=-3*pow(x0[i],2)+900*x0[i]+52500;		
			}
			else{
				x0[i]=x0[i-1]+alfa*g[i-1];
				g[i]=-3*pow(x0[i],2)+900*x0[i]+52500;
			}
				
			fx[i]=-pow(x0[i],3)+450*pow(x0[i],2)+52500*x0[i];
			printf("%d.\t",i+1);
			printf("%f\t",x0[i]);
			printf("%f\n",fx[i]);
		}
	}
	
	return 0;
}
