#include <stdio.h>

int Bubble(int A[], int N, int X){
    int temp, sum = 0;
    
    for(int i=0; i<N; i++){
        for(int j=N-1; j>i; j--){
            if(A[j-1] > A[j]){
                temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
                sum += X;
            }
        }
    }
	return sum;
}

int main(){
	int T;
	scanf("%d", &T);
    
    for(int i=0; i<T; i++){
    	int N,X;
		scanf("%d %d", &N, &X);
        
		int A[N];
    	for(int j=0; j<N; j++){
            scanf("%d", &A[j]);
        }
        printf("Case #%d: %d\n", i+1, Bubble(A, N, X));
    }
	return 0;
}
