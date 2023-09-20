#include <stdio.h>

int main(){
	long long int A, B, C=0;
	scanf("%lli %lli", &A, &B);

	for(int i=A;i<=B;i++){
		C= C+i;
	}
	printf("%lli\n", C);
	return 0;
}

