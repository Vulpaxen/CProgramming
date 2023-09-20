#include<stdio.h>

int searchBinary(long long int *total, long long int searchValues, long long int endIndex, long long int startIndex){
    long long int Left = startIndex;
    long long int Right = endIndex;
    
    while (Left < Right){
    	long long int Middle = Left + (Right-Left)/2;
        if (total[Middle] < searchValues+1)
            Left = Middle+1;
        else
            Right = Middle;
    }
	return Left;
}

int main(){
	long long int N, Q, total=0;
	scanf("%lld", &N);
	long long int A[N], sum[N];
	
	for(int i=0; i<N; i++){
    	scanf("%lld", &A[i]);
    	sum[0] = A[0];
		total+=A[i];
    	sum[i] = total;
    }
    scanf("%lld", &Q);
    long long int  M;
    
    for(int j=0; j<Q; j++){
    	scanf("%lld", &M);
    	if (M<sum[0]){
        	printf("Case #%lld: -1\n", j+1);
      	}
       	else
       		printf("Case #%lld: %lld\n", j+1, searchBinary(sum, M, N, 0));
    }
	return 0;
}
