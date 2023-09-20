#include <stdio.h>
#include <string.h>

struct nama{
	char arr[101];
};
nama A[101];
nama tmp;

void bubbleSort(int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1-i;j++){
			if(strcmp(A[j].arr,A[j+1].arr)>0){
				strcpy(tmp.arr,A[j].arr);
			    strcpy(A[j].arr,A[j+1].arr);
			    strcpy(A[j+1].arr,tmp.arr);
			}			
		}
	}	
}
	
int main(){
	int T, N, K;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		scanf("%d %d", &N, &K);
		for(int j=0;j<N;j++){
			scanf("%s", &A[j].arr); 
			getchar();
		}
		
		bubbleSort(N);
		
		printf("Case #%d: %s\n", i+1, A[K-1].arr);	
	}	
	return 0;
}
