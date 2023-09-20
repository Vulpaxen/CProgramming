#include<stdio.h>
#include<string.h>

void sort(long long int arr[],int N){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j] > arr[j+1]){
                long long int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
	int T, N;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        scanf("%d", &N);
        long long int arr[N];
        
        for(int j=0;j<N;j++){
            scanf("%lld", &arr[j]);
        }
        sort(arr,N);
        long long int max = arr[N-1] - arr[N-2];
        
        for(int j=N-1;j>0;j--){
            if(arr[j] - arr[j-1] < max)
			{
                max = arr[j] - arr[j-1];
            }
        }
        printf("Case #%d: %lld\n", i+1, max);
    }
	return 0;
}
