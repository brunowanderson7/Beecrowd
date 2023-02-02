#include <stdio.h>
	
int main (){
	int N=0, Naux=0, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;
	scanf("%d", &N);
	Naux=N;
	while(N>0){
		if((N-100)>=0){
			N=N-100;
			c100++;
		}else if((N-50)>=0){
			N=N-50;
			c50++;
		}else if((N-20)>=0){
			N=N-20;
			c20++;
		}else if((N-10)>=0){
			N=N-10;
			c10++;
		}else if((N-5)>=0){
			N=N-5;
			c5++;
		}else if((N-2)>=0){
			N=N-2;
			c2++;
		}else if((N-1)>=0){
			N=N-1;
			c1++;
		}
	}
	printf("%d\n", Naux);
	printf("%d nota(s) de R$ 100,00\n", c100);
	printf("%d nota(s) de R$ 50,00\n", c50);
	printf("%d nota(s) de R$ 20,00\n", c20);
	printf("%d nota(s) de R$ 10,00\n", c10);
	printf("%d nota(s) de R$ 5,00\n", c5);
	printf("%d nota(s) de R$ 2,00\n", c2);
	printf("%d nota(s) de R$ 1,00\n", c1);
	return 0;
}