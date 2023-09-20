#include <stdio.h>

int main(){
	int A, B, C, D;
	double Z;
	for (int i=1;i<=3;i++){
		scanf("%d %d %d %d", &A, &B, &C, &D);
		Z = (2*A/1)+(4*B/2)+(6*C/3)+(4*D/4);
		printf("%.2lf\n", Z);	
	}
	return 0;
}

