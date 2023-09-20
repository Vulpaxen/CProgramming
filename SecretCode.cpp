#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		char S[1000];
		scanf("%s", &S);
		int x=0;	
		x=strlen(S);
	
		for(int j=0;j<x;j++){
			if(S[j]%2==1){
				S[j]=1;
			}
			else{
				S[j]=0;
			}
		}
		printf("Case %d: ", i+1);
		for(int k=1;k<=x;k++){
			printf("%d", S[x-k]);
		}
		printf("\n");		
	}
    return 0;
}
