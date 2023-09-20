#include <stdio.h>

int main(){
	int T, N, arrA[100], arrB[100];
	scanf("%d", &T);
	for (int i=0;i<T;i++){
		scanf("%d", &N);
		for (int j=0;j<N;j++){
			scanf("%d", &arrA[j]);
		}
		for (int j=0;j<N;j++){
			scanf("%d", &arrB[j]);
		}
	printf("Case #%d:", i+1);
		for (int j=0;j<N;j++){
		printf(" %d", arrA[j]-arrB[j]);
		}
	printf("\n");
	}
	return 0;
}
