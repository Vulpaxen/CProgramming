#include <stdio.h>
#include <math.h>
int main(){
	int money;
	double compoundinterest, after;
	scanf("%d %lf", &money, &compoundinterest);
	after = money*pow(1+compoundinterest/100, 3);
	printf("%.2lf\n", after);
	return 0;
}
