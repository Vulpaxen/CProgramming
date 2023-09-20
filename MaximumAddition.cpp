#include <stdio.h>

int main(){
    int T;
    scanf ("%d", &T);
    
    for (int i=0; i<T; i++){
        int N;
        long long int M, flag=0, sum=0, end=0, max=0;
        scanf("%d %lld", &N, &M);
        long long int A[N];
        
        for (int j=0; j<N; j++){
            scanf("%lld", &A[j]);
        }
        
        for (int j=0; j<N; j++){
            sum+=A[j];
            flag++;
            while (sum>M){
                sum=sum-A[end];
                end++;
                flag--;
            }
            if (max<flag){
                max=flag;
            }
        }
        if (max==0){
        	max=-1;
		}
        printf ("Case #%d: %lld\n", i+1, max);
    }
    return 0;
}
