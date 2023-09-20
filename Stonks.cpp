#include <stdio.h>

int main(){
	int N;
	long long int stocks=0;
	scanf("%d", &N);
	long long int A[N];
	
	for(int i=0; i<N; i++){
		scanf("%lld", &A[i]);
		if(A[i]>0){
			stocks+=A[i];
		}
	}
	printf("%lld\n", stocks);
	return 0;
}
