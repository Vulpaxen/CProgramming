#include <stdio.h>

int main(){
    int N, K, P;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        int p[100], k[100], code[100];
        scanf("%d %d", &K, &P);

        for(int j=0;j<K;j++){
            scanf("%d", &p[j]);
        }
        for(int j=0;j<P;j++){
            scanf("%d", &k[j]);
        }

        for(int j=0;j<K-P+1;j++){
            int sum=0;
            for(int l=0;l<P;l++){
                sum+=p[j+l]^k[l];
            }
            code[j]=sum;
            
            if(j==K-P){
                printf("%d\n", code[j]);
            }
            else{
                printf("%d ", code[j]);
            }
        }
    }
}
