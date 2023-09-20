#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int N,T;
	char S[1000];
	scanf("%d", &N);
	
	for(int i=0;i<N;i++){
	scanf(" %[^\n]", S);
	T=strlen(S);
		for(int j=0;j<T;j++){
        	if(S[j]==' '){
        		for(int k=j;k<T;k++){
            		S[k]=tolower(S[k+1]);
        		}
            T--;
			}
    	}
    	for(int k=0;k<T;k++){
            S[k]=tolower(S[k]);
        }
	int flag=0;
		for(int j=0;j<T;j++){
			if(S[j]==S[T-j-1]){
			flag++;
			}
		}
		if(flag==T){
			printf("true\n");	
		}else{
			printf("false\n");
		}
	}
	return 0;
}
