#include <stdio.h>

int main(){
	
	int d=0, D=0, A=0, M=0;
	scanf("%d",&d);
	A = (d/365);
	d = d-(A*365);
	M = (d/30);
	d = d-(M*30);
	D = (d);
	printf("%d ano(s)\n", A);
	printf("%d mes(es)\n", M);
	printf("%d dia(s)\n", D);
	return 0;
	
}