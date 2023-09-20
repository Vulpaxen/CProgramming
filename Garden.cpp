#include <stdio.h>

int main(){
	int X, Y, T, a, b, c;
	scanf("%d %d", &X, &Y);
	int arr[X+1][Y+1];
	
	for(int i=1; i<=X; i++){
		for(int j=1; j<=Y; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++){
		scanf("%d %d %d", &a, &b, &c);
		arr[a][b] = c;
	}
	for(int i=1; i<=X; i++){
		for(int j=1; j<=Y; j++){
			if(j==Y){
				printf("%d", arr[i][j]);
			}else{
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
