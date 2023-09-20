#include <stdio.h>

int main(){
	int T,N;
	long long int sum[501];
	int arr[501][501];
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		
		for(int x=0; x<N; x++){
			for(int y=0;y<N;y++){
				scanf("%d", &arr[x][y]);
			}
		}
	
		for(int y=0; y<N; y++){
			sum[y]=0;
			for(int x=0; x<N; x++){
				sum[y]+=arr[x][y];
			}
		}
		printf("Case #%d: ", i+1);
		
		for(int j=0; j<N; j++){
			printf("%lld", sum[j]);
			sum[j]=0;
		    if(j==N-1){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }
	return 0;
}
