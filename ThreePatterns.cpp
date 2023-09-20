#include <stdio.h>

int main(){
	int N,K;
	scanf("%d %d", &N, &K);
	for(int i=0; i<N; i++){
    	for(int j=0; j<N; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<N; i++){
    	for(int j=0; j<N; j++){
    		if((i+1)%K==0){
    		printf("#");
			}
            else{
			printf(".");
			}
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
    		if((j+1)%K==0){
    		printf("#");
			}
            else{
            printf(".");
			}
        }
        printf("\n");
    }
}
