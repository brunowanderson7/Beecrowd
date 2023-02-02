#include <stdio.h>

int main(){
	int a=0,n=0,l=0,s=0;
	scanf("%d%d",&a,&n);
	while(n<=0){
		scanf("%i",&n);
	}
	for(l=a;l<a+n;l++){
		s=s+l;
	}
	printf("%i\n", s);
	return 0;
	
}