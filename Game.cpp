#include <stdio.h>
#include <ctype.h>

int main(){
	int N, M, letter;
	scanf("%d %d", &N, &M);
	char arr[N];
	scanf("%s", &arr);
	
	for(int i=0;i<M;i++){
		scanf("%d", &letter);
		if(arr[letter]<=90){
			arr[letter]=tolower(arr[letter]);
		}
		else{
			arr[letter]=toupper(arr[letter]);
		}
	}
		for(int i=0;i<N;i++){
			printf("%c", arr[i]);
		}
	printf("\n");
	
    return 0;
}
