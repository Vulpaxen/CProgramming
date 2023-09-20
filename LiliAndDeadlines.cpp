#include <stdio.h>
#include <string.h>

void sort(long long int *arr, char string[][111], int N){
    for (int i=0; i<N-1; i++){
        for (int j=0; j<N-1-i; j++){
            if (arr[j] > arr[j+1]){
                long long int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                char tmp[11];
                strcpy(tmp, string[j]);
                strcpy(string[j], string[j+1]);
                strcpy(string[j+1], tmp);
            }
            else if (arr[j] == arr[j+1]){
                if (strcmp(string[j], string[j+1])>0){
                    char tmp[N];
                    strcpy(tmp, string[j]);
                    strcpy(string[j], string[j+1]);
                    strcpy(string[j+1], tmp);
                }
            }
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);

    char S[N][111];
    long long int arr[N+1];

    for(int i=0;i<N;i++){
        scanf("%s %lld", S[i], &arr[i]);
    }
    sort(arr, S, N);
    
    for (int i=0; i<N; i++){
        printf("%s\n", S[i], arr[i]);
    }
	return 0;
}
