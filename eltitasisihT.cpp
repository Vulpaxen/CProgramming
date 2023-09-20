#include <stdio.h>

void reverseStr(char *S){
	if(*S){
		reverseStr(S+1);
		printf("%c", *S);
	}
}

int main(){
	int T;
	char S[1000];
	scanf("%d", &T); 
	getchar();
	
	for(int i=0; i<T; i++){
		scanf("%[^\n]", &S); 
		getchar();
		printf("Case #%d: ", i+1);
		reverseStr(S);
		printf("\n");
	}
	return 0;
}
