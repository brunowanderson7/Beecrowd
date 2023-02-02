#include <stdio.h>

int main (){
	int x=0;
	double dt=0.00, y=0.00;
	scanf("%d%lf", &x, &y);
	dt=(x/y);
	printf("%.3lf km/l\n", dt);
	return 0;
}