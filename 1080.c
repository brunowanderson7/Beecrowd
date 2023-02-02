#include <stdio.h>

int main (){
	int v=0, m=0, l=0, aux=0;
	for(l=1;l<=100;l++){
		scanf("%d", &v);
		if(v>m){
			m=v;
			aux=l;			
		}
	}
	printf("%d\n", m);
	printf("%d\n", aux);
	return 0;
}