#include <stdio.h>
#include <math.h>

int main (){
	double x1=0.00, y1=0.00, x2=0.00, y2=0.00, d=0.00;
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	d=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	printf("%.4lf\n", d);
	return 0;
}