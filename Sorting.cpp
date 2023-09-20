#include <stdio.h>
#include <string.h>

struct data{
	char nama[111];
    int nomor;
}
arr[111];

void Bubble(int N){
    struct data temp;
    int i, j;

    for(i=0; i<N; i++){
        for(j=N-1; j>i; j--){
            if(arr[j-1].nomor < arr[j].nomor){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else if (arr[j-1].nomor == arr[j].nomor){
                if(strcmp(arr[j-1].nama,arr[j].nama)>0){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main(){
	int T;
    scanf("%d", &T);
    getchar();

    for(int i=0; i<T; i++){
    	int N;
        scanf("%d", &N);
        getchar();
		for(int j=0; j<N; j++){
        	scanf("%[^#]#%d\n", &arr[j].nama, &arr[j].nomor);
        }

    	Bubble(N);
    	printf("Case #%d:\n", i+1);
    	for(int j=0; j<N; j++){
        	printf("%s - %d\n", arr[j].nama, arr[j].nomor);
    	}
    }
	return 0;
}
