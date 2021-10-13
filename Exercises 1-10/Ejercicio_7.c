#include<stdio.h>

int main(void){
	
	int mes,anio;
	float bi;
	
	printf("Ingrese año: "); scanf("%d",&anio);
	printf("Ingrese mes: "); scanf("%d",&mes);

    bi= anio % 4;
    printf("\n");
    
	if(anio>0){
		if(bi == 0){
		
			printf("SI es un año bisiesto\n");
			printf("Mes:  ");
			switch(mes){
				case 1:
					printf("Enero\n");
					printf("Cantidad de dias: 31");
				break;
				case 2:
					printf("Febrero\n");
					printf("Cantidad de dias: 29");
				break;
				case 3:
					printf("Marzo\n");
					printf("Cantidad de dias: 31");
				break;
				case 4:
					printf("Abril\n");
					printf("Cantidad de dias: 30");
				break;
				case 5:
					printf("Mayo\n");
					printf("Cantidad de dias: 31");
				break;
				case 6:
					printf("Junio\n");
					printf("Cantidad de dias: 30");
				break;
				case 7:
					printf("Julio\n");
					printf("Cantidad de dias: 31");
				break;
				case 8:
					printf("Agosto\n");
					printf("Cantidad de dias: 31");
				break;
				case 9:
					printf("Septiembre\n");
					printf("Cantidad de dias: 30");
				break;
				case 10:
					printf("Octubre\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 11:
					printf("Noviembre\n");
					printf("Cantidad de dias: 30");
				break;
				case 12:
					printf("Diciembre\n");
					printf("Cantidad de dias: 31\n");
				break;
				default: 
				printf("Valor no valido\n");
			}
		}
		else {
			printf("NO es un año bisiesto\n");
			printf("Mes:  ");
			switch(mes){
				case 1:
					printf("Enero\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 2:
					printf("Febrero\n");
					printf("Cantidad de dias: 28\n");
				break;
				case 3:
					printf("Marzo\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 4:
					printf("Abril\n");
					printf("Cantidad de dias: 30\n");
				break;
				case 5:
					printf("Mayo\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 6:
					printf("Junio\n");
					printf("Cantidad de dias: 30\n");
				break;
				case 7:
					printf("Julio\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 8:
					printf("Agosto\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 9:
					printf("Septiembre\n");
					printf("Cantidad de dias: 30\n");
				break;
				case 10:
					printf("Octubre\n");
					printf("Cantidad de dias: 31\n");
				break;
				case 11:
					printf("Noviembre\n");
					printf("Cantidad de dias: 30");
				break;
				case 12:
					printf("Diciembre\n");
					printf("Cantidad de dias: 31\n");
				break;
				default: 
				printf("Valor no valido\n");
			}
		}
	}
	else
	printf("\nIngrese un año valido\n");
	return 0;
}
