#include <stdio.h>

int main (){
	
	char nome[15];
	double salario=0.00, vendas=0.00;
	scanf("%s", &nome);
	scanf("%lf%lf", &salario, &vendas);
	salario=(salario+(vendas*0.15));
	printf("TOTAL = R$ %.2lf\n", salario);
	
	return 0;
}