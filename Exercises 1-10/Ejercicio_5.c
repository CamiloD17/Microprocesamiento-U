#include <stdio.h>
#include <math.h>

int main(void){
	
	int i;
	double den_1=2.0,den_2=3.0,den_3=4.0;
	double div=0.0,ope=3.0;
	
	for(i=1;i<=15;i++){

		if(i %2 == 0){
			div= 4/(den_1*den_2*den_3);
			ope= ope - div;		
			printf("Aproximacion %d. : %lf\t\n",i,ope);
		}
		else{
		    div= 4/(den_1*den_2*den_3);
			ope= ope + div;	
			printf("Aproximacion %d. : %lf\t\n",i,ope);
		}
		
		den_1 +=2;
		den_2 +=2;
		den_3 +=2;
		
	}
	
    return 0;
}
