#include <stdio.h>

int main(){
	int T, A, B;
	scanf("%d", &T);
	
	for(int X=0; X<T;X++){
		scanf("%d %d", &A, &B);
		int Y=0;
		int multiply=1;
		
		while(A>0 || B>0){
			Y+=(((A%10)+(B%10))%10)*multiply;
			A=A/10;
			B=B/10;
			multiply=multiply*10;
		}
		printf("Case #%d: %d\n", X+1, Y);
	}
	return 0;
}
