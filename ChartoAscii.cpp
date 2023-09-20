#include <stdio.h>
#include <string.h>

int main(){
	int T;
	char S[1000];
	scanf("%d",&T);

	for(int j=0;j<T;j++){
	scanf("%s", &S);
	int N=strlen(S);
	printf("Case %d: ",j+1); 	
		for(int i=0;i<N-1;i++){		
		printf("%d-", S[i]);
		}
	printf("%d\n", S[N-1]);	
	}
	return 0;
}
