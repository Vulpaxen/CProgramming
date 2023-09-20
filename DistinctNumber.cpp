#include <stdio.h>

int main(){
	int N, T, sum;
	scanf("%d", &T);
	for(int k=0;k<T;k++){
		scanf("%d",&N);
		int x[N];
		for(int i=0;i<N;i++){
			scanf("%d", &x[i]);	
		}
		
		for(int j = 0; j < N; j++){
			int temp;
			for(int k = j + 1; k < N; k++){
				if(x[j] > x[k]){
					temp = x[j];
					x[j] = x[k];
					x[k] = temp;
				}
			}
		}
		
		int count = 0;
		for(int j = 0; j < N; j++){
			while(j < N - 1 && x[j] == x[j + 1]){
				j++;
			}
			count++;
		}
		printf("Case #%d: %d\n", k+1, sum);
		sum=0;			
	}
    return 0;
}
