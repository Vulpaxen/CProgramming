#include<stdio.h>

int main(){
    int T, N, max, temp;
    scanf("%d", &T);
    
    for (int i=0; i<T; i++){
        scanf("%d", &N);
        long long int arr[1000], freq[1000], count=0;
        for (int j=0; j<N; j++){
            scanf("%lld", &arr[j]);
        }
        temp=0;
        for (int j=0; j<N; j++){     
            for (int k=j+1; k<N; k++){     
                if(arr[j] > arr[k]){    
                    temp = arr[j];
                    arr[j] = arr[k];  
                    arr[k] = temp;    
                }     
            }     
        }
        max=0;
        for (int j=0; j<N; j++){
            count=1;
            for(int k=j+1; k<N; k++){
                if (arr[j]==arr[k]){
                    count++;
                    freq[k]=0;
                }
            }
            if (arr[j]!=0){
                freq[j]=count;
            }
            if (freq[j]>max){
                max=freq[j];
            }
        }
        printf("Case #%d: %d\n", i+1, max);
        for (int j=0; j<N; j++){
            if (freq[j]!=0){
                if (freq[j]==max){
                printf("%lld\n", arr[j]);
                break;
                }
            }
        }
    }

    return 0;
}
