#include <stdio.h>

int main (){
	int c=0, q=0;
	double t=0.00;
	scanf("%d%d", &c, &q);
	if(c==1){
		t=q*4.00;
	}else if(c==2){
		t=q*4.50;
	}else if(c==3){
		t=q*5.00;
	}else if(c==4){
		t=q*2.00;
	}else if(c==5){
		t=q*1.50;
	}
	printf("Total: R$ %.2lf\n", t);
	return 0;
}