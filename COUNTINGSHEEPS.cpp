#include <stdio.h>

int main(){
	int N,M;
	scanf("%d %d", &N, &M);
		while (N<M, M>0){
		printf("%d\n", N);
		N=N+1;
		M=M-1;
	}
return 0;
}
