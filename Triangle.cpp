#include <stdio.h>

int main(){
	int N,K;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
        scanf("%d", &K);
    	printf("Case #%d:\n", i+1);
    
    	for(int i=1; i<=K; i++){
    		for(int j=i; j<K; j++){
			printf(" ");
       		}
   			for (int j=0; j<i; j++){
   				if(K%2==0){
    				if (j%2==0){
    				printf("#");	
					}
            		else{
            		printf("*");
					}
       			}	
       			else{
					if(j%2==1){
					printf("#");
					}else{
					printf("*");
					}
				}	
			}
    printf("\n");
		}
	}
	return 0;
}
