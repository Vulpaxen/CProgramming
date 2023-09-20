#include <stdio.h>

int main(){
	int N;
	for(int i=0;i<3;i++){
		scanf("%d",&N);
		char arr[N];
		scanf("%s", &arr);			
		printf("%c%c\n", arr[N-1], arr[0]);		
	}
    return 0;
}
