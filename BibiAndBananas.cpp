#include<stdio.h>

int main(){
    typedef long long int lng;
    int count=0;
    lng T, N, K, A[10005];
    scanf("%lld", &T);
    for (int i=0; i<T; i++){
        scanf("%lld %lld", &N, &K); 
        for (int j=0; j<N; j++){
            scanf("%lld", &A[j]);
            if(A[j]>=K){
               count++;
            }
        }
    	printf("Case #%d: %d\n", i+1, count);
    	count=0;
    }
    return 0;
}
