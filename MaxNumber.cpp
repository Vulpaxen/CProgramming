#include <stdio.h>

int main(){
	int N, M, max;
	scanf("%d %d", &N, &M);
	int arrN[N];
	int arrM[M];
	
	for(int i=0; i<N; i++){
		scanf("%d", &arrN[i]);
	}
	
	for(int i=0; i<M; i++){
		scanf("%d", &arrM[i]);
	}
	
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			if(arrM[i]==arrN[j]){
				arrN[j]=0;
			}
		}
	}
	
	max=arrN[0];
	for(int i=1; i<N; i++){
		if(max<arrN[i]){
			max=arrN[i];
		}
	}
	
	if(max==0){
		max=-1;
	}
	printf("Maximum number is %d\n", max);
	
    return 0;
}
