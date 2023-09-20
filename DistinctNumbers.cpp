#include <stdio.h>
#include <stdlib.h>

int temp(const void * a, const void * b){
	return(*(int*)a - *(int*)b);
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int N;
		int sum=0;
		scanf("%d", &N);
		int X[N];
		
		for(int j=0; j<N; j++){
			scanf("%d", &X[j]);
		}
		
		qsort(X, N, sizeof(int), temp);
		for(int k=0; k<N; k++){
			if(X[k]!=X[k+1]){
				sum++;
			}
		}
		printf("Case #%d: %d\n", i+1, sum);
		sum=0;	
	}
	return 0;
}
