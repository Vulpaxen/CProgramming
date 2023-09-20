#include <stdio.h>

int main(){
    int T,N,V;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d", &N);
        int arr[N];
        long long int X=-1000000;
        long long int Y=-1000000;
        
        for(int j=0; j<N; j++){
            scanf("%d", &V);
            arr[j]=V;
        }
        
        for(int j=0; j<N; j++){
            if(arr[j]>X){
                Y=X;
                X=arr[j];
            }
            else if(arr[j]>Y){
                Y=arr[j];
            }
        }
        printf("Case #%d: %lld\n", i+1, X+Y);
    }
    return 0;
}
