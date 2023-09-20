#include <stdio.h>

int main(){
	int T, N, arrA[100000], arrB[100000], flag;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++){
		scanf("%d",&N);
		for(int j=0; j<N;j++){
			scanf("%d", &arrA[j]);
		}
		flag=0;
		for(int j=0; j<N;j++){
			scanf("%d", &arrB[j]);
			if(arrA[j]<arrB[j]){
			flag++;		
			}
		}
		printf("Case #%d: %d\n", i+1, flag);
	}
    return 0;
}
