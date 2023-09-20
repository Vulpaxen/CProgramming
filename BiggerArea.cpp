#include <stdio.h>
int main(){
	int A,B,N;
	scanf("%d", &N);
	int arrA[N][N];
	int arrB[N][N];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d", &arrA[i][j]); 
			getchar();
			if(arrA[i][j]==1){
				A++;
			}
		}
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d", &arrB[i][j]); 
			getchar();
			if(arrB[i][j]==1){
				B++;
			}
		}
	}

	if(A>B){
		printf("object 1 is bigger\n");
	}
	else if(B>A){
		printf("object 2 is bigger\n");	
	}
	else{
		printf("object 1 and 2 has the same size\n");
	}
	
	return 0;
}
