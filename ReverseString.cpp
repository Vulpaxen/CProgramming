#include <stdio.h>
#include <string.h>

int main(){
	int T,N;
	char arr[10000];
	scanf("%d", &T);

	for(int i=0;i<T;i++){
		scanf("%s", &arr);
		N=strlen(arr);
		printf("Case #%d : ",i+1);	   	
		for(int j=0;j<N;j++){		
			printf("%c", arr[N-j-1]);
		}
	printf("\n");
	}
	return 0;
}
