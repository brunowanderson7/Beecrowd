#include <stdio.h>

int main (){
	
	double M[12][12] = {}, S=0.00, med=0.00;
	char O = ' ';
	int l=0, j=0, auxL=11, cont=0;
	
	scanf("%c", &O);
	
	for(l = 0; l < 12; l ++){
		
		for(j = 0; j < 12; j ++){
			
			scanf("%lf", &M[l][j]);
			if((j > l) && (j < auxL)){
			
				S = (S + M[l][j]);
				cont ++;
				
			}
		}
		
		auxL --;
	}
	
	
	if(O == 'S'){
		
		printf("%.1lf\n", S);
	
	} else if (O == 'M'){
		
		med = (S/cont);
		printf("%.1lf\n", med);
	
	}
	
	return 0;
}