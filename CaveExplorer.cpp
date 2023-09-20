#include <stdio.h>	

int main(){
	int N;
	scanf("%d", &N);
	
	int x[N];
	x[0]=0;
	x[1]=1;
	
	for(int i=2;i<=N;i++){
		x[i]=x[i-1]*2+1;
	}
	
	for(int i=N;i>=1;i--){
		for(int j=x[i];j>0;j--){
			for(int k=x[N-i];k>0;k--){
				printf(" ");
			}
			printf("*");
		}
	printf("\n");
	}	
	return 0;
}

