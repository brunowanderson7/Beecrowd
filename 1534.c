#include <stdio.h>
#include <stdio.h>


int main (){
	
	int l=0, j=0, n=0, aux=0;
	
	while(scanf("%d", &n) != EOF){
		fflush(stdin);
		
		if((n < 3) || (n > 70))
		break;
		
		if(n == EOF)break;
		
		int M[n][n];
		aux = n-1;
		
		for(l = 0; l < n; l ++){
			
			for(j = 0; j < n; j ++){
				
				M[l][j] = 3;
				
			}
		}
		
		for(l = 0; l < n; l ++){
			
			for(j = 0; j < n; j ++){
				
				if(j == l){
					M[l][j] = 1;
				}
				if(j == aux){
					M[l][j] = 2;
				}
				printf("%d", M[l][j]);
			}
			printf("\n");
			aux--;
		}
		n = EOF;
	}
		
	return 0;
} 