#include <stdio.h>
int main(){
	
	int T, N, arrA[100000];
	
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&N);
		int arrB[N][N];
	
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
			scanf("%d",&arrB[j][k]);
			}
		}	
		arrA[0]=0;

		printf("Case #%d:",i+1);
		for(int j=0;j<N;j++){		
			for(int k=0;k<N;k++){
			arrA[j]+=arrB[k][j];
			}
		printf(" %d", arrA[j]);
		arrA[j]=0;			
		}
	printf("\n");
	}
    return 0;
}
