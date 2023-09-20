#include <stdio.h>

int sum(int N) {
    if(N == 0){
    	return 0;
    }
    else if (N%2 != 0){
    	return 1;
    }
    else{
    	return sum(N-1) + sum(N-2);
    } 
    return 0; 
}

int main() {
    int N, result;
    scanf("%d", &N);
    result = sum(N);
    printf("%d\n", result);
    return 0;
}

