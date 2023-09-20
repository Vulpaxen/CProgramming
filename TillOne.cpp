#include <stdio.h>

int sum(int N){
    if(N == 1){
    	return N=1;
    }
    else if (N%2 != 0){
    	return sum(N-1) + sum(N+1);
    }

    else if(N%2 == 0){
    	return sum(N/2);
    } 
     return 0; 
}

int main() {
    int N, result, T;
    scanf("%d", &T);
    
    for (int i=0; i<T; i++){
    	scanf("%d", &N);
    	result = sum(N);
    	printf("Case #%d: %d\n", i+1, result);
    } 
    return 0;
}

