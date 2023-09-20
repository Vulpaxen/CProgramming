#include <stdio.h>

void num(long int N){
    if (N>1)num(N/2);
    	printf("%ld", N%2);
	}
 
int main(void){
	int T;
	long long int N;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%lld", &N);
    	printf("Case #%d: ", i+1);
    	num(N);
    	printf("\n");
	}
	return 0;
}
