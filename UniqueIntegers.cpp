#include <stdio.h>

void merge(int arr[],int L,int M,int R){
    int i,j,k;
    int left = M - L + 1;
    int right  = R - M;
    int l[left],r[right];

    for(i=0;i<left;i++) l[i] = arr[L+i];
    for(j=0;j<right;j++) r[j] = arr[M+j+1];

    i = 0; j = 0; k = L;
    while(i < left && j < right){
        if(l[i] <= r[j]){
            arr[k] = l[i];
            i++;
        }else{
            arr[k] = r[j];
            j++;
        }k++;
    }
    while(i < left){
        arr[k] = l[i];
        i++; k++;
    }
    while(j < right){
        arr[k] = r[j];
        j++; k++;
    }
}


void sort(int arr[],int L,int R){
    if(L < R){
        int M = L + (R - L) / 2;
        sort(arr,L,M);
        sort(arr,M+1,R);
        merge(arr,L,M,R);
    }
}

int linearSearch(int arr[],int N){
    int count=0;
    for(int i=0;i<N ;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    return count;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for(int i=0;i<N;i++){
        scanf("%lld", &arr[i]);
    }
    sort(arr,0,N);
    printf("%lld\n", linearSearch(arr,N));

    return 0;
}
