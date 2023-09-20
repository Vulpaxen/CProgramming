#include <stdio.h>
int main(){
	int T, N;
	long long int sum[100000];
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		scanf("%d",&N);
		long long int arrB[N][N];
	
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
			scanf("%lld",&arrB[j][k]);
			}
		}
		sum[0]=0;
		
		printf("Case #%d:",i+1);
		for(int j=0;j<N;j++){		
			for(int k=0;k<N;k++){
			sum[j]+=arrB[k][j];
			}
		printf(" %lld", sum[j]);
		sum[j]=0;		
		}
	printf("\n");
	}
    return 0;
}
