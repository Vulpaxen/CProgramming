#include <stdio.h>

int main(){
	int A1, A2, A3, B1, B2, B3, random;
	scanf("%d\n%d %d\n %d %d\n %d %d", &random, &A1, &B1, &A2, &B2, &A3, &B3);
	printf("%d\n%d\n%d\n", ((A1/B1)<<B1), ((A2/B2)<<B2), ((A3/B3)<<B3));
	return 0;
}
