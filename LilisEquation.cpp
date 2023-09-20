#include <stdio.h>

int recursion(int M, int N){
    if(M == 0 || N == 0){
        return 1;
    }
    else{
        return recursion(M-1,N-1)+recursion(M,N-1)+recursion(M-1,N);
    }
}

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    printf("%d\n", recursion(M,N));
	return 0;
}

