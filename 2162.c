#include <stdio.h>

int main (){
	
	int N=0, l=0, aux=0, vLog=0;
	
	scanf("%d", &N );
	
	int H[N];
	
	for(l = 0; l < N; l ++){
		scanf("%d", &H[l]);
		
	}
	
	if(H[0] > H[1]){
		aux = 1;
	}else if (H[0] < H[1]){
		aux = 0;
	}else {
		aux = 2;
	}
	
	for(l = 1; l < N; l ++){
		
		if(aux == 2){
			
			vLog = 0;
			break;
		
		}else if(aux == 1){
			
			if(H[l] < H[l-1]){
				
				aux = 0;
				vLog = 1;
				continue;
				
			}else if(H[l] > H[l-1] || H[l] == H[l-1]){
				
				vLog = 0;
				break;
				
			}	
		}else if(aux == 0){
			
			if(H[l] > H[l-1]){
				
				aux = 1;
				vLog = 1;
				continue;
				
			}else if(H[l] < H[l-1] || H[l] == H[l-1]){
				
				vLog = 0;
				break;
				
			}
			
		}
		
	}
	
	printf("%d\n", vLog);
	
	return 0;
}