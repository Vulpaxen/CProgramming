#include <stdio.h>

int main(){
	int T, A, B, C;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d %d %d", &A, &B, &C);
		int cashback=A*B/100;
		if(cashback>C){
			cashback=C;
		}
		printf("Case #%d: %d\n", i+1, cashback);
	}
	return 0;
}
