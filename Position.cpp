#include <stdio.h>

int main(){
	long int N, M, A[100001], Q[100001], P[100001]={0};
	scanf("%ld %ld%*c", &N, &M);
	
	for(long int i=0; i<N; i++){
    	scanf("%ld", &A[i]);
    	if(P[A[i]]==0){
      		P[A[i]]=i+1;
    	}
  	}
  
  	for(long int i=0; i<M; i++){
    	scanf("%ld", &Q[i]);
    	
    	if(P[Q[i]]==0){
    		printf("-1\n");
    	} 
		else{
    	printf("%ld\n", P[Q[i]]);
    	}
  	}
	return 0;
}
