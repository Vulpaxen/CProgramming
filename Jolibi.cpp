#include <stdio.h>

int main(){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	if (n>m || n<k){
		printf("No");
	}
	else if (m>=n && k>=n){
		printf("Yes");
	}
	return 0;
}
