#include <stdio.h>

int main(){
	int N, Q, K, arrA[100000];
	scanf("%d", &N);
	for (int i=1;i<=N;i++){
		scanf("%d", &arrA[i]);
	}
	
	scanf("%d", &Q);
	for (int j=1;j<=Q;j++){
		scanf("%d", &K);
		scanf("%d", &arrA[K]);
		printf("Case #%d: ", j);
		for(int k=1;k<=N-1;k++){	
		printf("%d ", arrA[k]);
		}	
	printf("%d\n", arrA[N]);
	}
	return 0;
}
