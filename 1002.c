#include <stdio.h>
#include <math.h>

int main  (){
	double n=3.14159, area=0.00, raio=0.00;
	scanf("%lf", &raio);
	area=n*pow(raio,2);
	printf("A=%.4lf\n", area);
	return 0;
}