#include<stdio.h>
#include<string.h>

int main(){
	int K, N, F, count, temp2, i, j, k, l;
	int flag=0, mmr[1001];
	scanf("%d", &K);
	
	for(int i=1; i<=K; i++){
		scanf("%d", &N);
		for(j=0; j<N; j++){
			scanf("%d", &mmr[j]);
		}
		scanf("%d", &F);
		
		for(l=0; l<N-1; l++){
			for(k=0; k<N-1; k++){
				if(mmr[k]>mmr[k+1]){
					int temp=mmr[k];
					mmr[k]=mmr[k+1];
					mmr[k+1]=temp;
				}
			}
		}
	
		for(j=0; j<N; j++){
			if(F==mmr[j]){
				flag++;
			}
		}
	
		if(flag>0){
			if(F!=mmr[k]){
				for(j=0; j<N; j++){
					if(mmr[j]==F){
						temp2=1;
						count=j;
					}
				}
				if(temp2==1){
					printf("CASE #%d: %d %d\n", i, F, mmr[count+1]);
				}
			}
			else if(F==mmr[k]){
				printf("CASE #%d: %d %d\n", i, mmr[k-1], F);
			}
			flag=0;
		}
		else{
			printf("CASE #%d: -1 -1\n", i);
			flag=0;
		}
	}
	return 0;
}
