#include<stdio.h>

int main(){
	int T,N,M,O;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
   		scanf("%d %d %d", &N, &M, &O);
   		
     	if (N+M <= O || N+O <= M || M+O <= N){
        	printf("Case #%d: No\n", i+1);
        }else{
        	printf("Case #%d: Yes\n", i+1);
        }
    }
	return 0;
}
