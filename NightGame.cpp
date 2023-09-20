#include <stdio.h>

int main(){
	int T, N, arr[1000000000];
	scanf("%d", &T);
	for (int i=0 ; i<T ; i++){
		scanf("%d", &N);
		for (int j=0;j<N;j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:", i+1);
		for (int j=N-1;j>=0;j--){
		printf(" %d", arr[j]);
		}
	printf("\n");
	}
	return 0;
}
