#include <stdio.h>

int main(){
	int T,N;
	scanf("%d", &T);
	
	for (int i=0;i<T;i++){
		scanf ("%d", &N);
		for (int i=0;i<N;i++){
			for (int j=0;j<N;j++){
           		if(i==0 || i==N-1 || j==0 || j==N-1 || i==j || j == N-i-1 ){
                printf("*");
           		}
				else{
                printf(" ");
           		}	
			}
			printf("\n");
        }
        printf("\n");
    }
}
