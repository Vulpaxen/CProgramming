#include <stdio.h>
#include <math.h>

int main(){
	int T, N, factors;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		scanf("%d", &N);
		factors=0;
		for(int j=1;j<=sqrt(N);j++){
			if(N%j==0){
				if(N/j==j){
				factors++;
				}
				else{
				factors+=2;
				}
			}
		}
		printf("Case #%d: %d\n", i+1, factors);
	}
	
	return 0;
}
