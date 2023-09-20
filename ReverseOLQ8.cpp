#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int T,stringLength;
	char S[1000];
	scanf("%d", &T);

	for(int i=0; i<T; i++){
	scanf("%s", &S);
	stringLength=strlen(S);

	for(int j=0;j<stringLength;j++){
		if(isupper(S[j])){
			S[j]=tolower(S[j]);
		}else{
			S[j]=toupper(S[j]);
		}
	}
	
	printf("Case #%d: ", i+1);	   	
		for(int k=0; k<stringLength; k++){		
			printf("%c", S[(stringLength-1)-k]);
		}
	printf("\n");
	}
	return 0;
}
