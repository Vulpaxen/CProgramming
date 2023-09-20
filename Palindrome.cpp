#include <stdio.h>
#include <string.h>

int main(){
	int T,N;
	char S[1000];
	scanf("%d", &T);

	for(int i=0;i<T;i++){
	scanf("%s", &S);
	N=strlen(S);	 
	int flag=0;
		for(int j=0;j<N;j++){
			if(S[j]==S[N-j-1]){
			flag++;
			}
		}
	printf("Case #%d:", i+1);
		if(flag==N){
			printf(" Yay, it's a palindrome\n");	
		}else{
			printf(" Nah, it's not a palindrome\n");
		}
	}
	return 0;
}
