#include <stdio.h>

int main  (){
	
	int par[5], impar[5], l=0, auxPar=0, n=0, auxImpar=0, j=0;
	
	while(l < 15){
		
		scanf("%d", &n);
		if(n % 2 == 0){
			par[auxPar] = n;
			auxPar ++;			
		} else {
			impar[auxImpar] = n;
			auxImpar ++;
		}
		
		if(auxPar == 5){
			for(j = 0; j < 5; j ++){
				printf("par[%d] = %d\n", j, par[j]);
				auxPar = 0;
			}
			
		}
		if(auxImpar == 5){
			for(j = 0; j < 5; j ++){
				printf("impar[%d] = %d\n", j, impar[j]);
				auxImpar = 0;
			}
			
		}
		l ++;
	}
	
	for(l = 0; l < auxImpar; l ++){
		printf("impar[%d] = %d\n", l, impar[l]);
	}
	for(l = 0; l < auxPar; l ++){
		printf("par[%d] = %d\n", l, par[l]);
	}
	
	return 0;
}