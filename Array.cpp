#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int A[N],B[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < N; i++){
		scanf("%d", &B[A[i]]);
	}
	for(int i = 0; i < N; i++){
		if(i==N-1){
			printf("%d", B[i]);
		}
		else{
			printf("%d ", B[i]);
		}
	}
	printf("\n");
	return 0;
}
