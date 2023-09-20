#include <stdio.h>

int main(){
	long long int A1, A2, A3, B1, B2, B3, C1, C2, C3, D1, D2, D3;
	scanf("(%lli+%lli)x(%lli-%lli)\n(%lli+%lli)x(%lli-%lli)\n(%lli+%lli)x(%lli-%lli)", &A1, &B1, &C1, &D1, &A2, &B2, &C2, &D2, &A3, &B3, &C3, &D3);
	printf("%lli %lli %lli\n", (A1+B1)*(C1-D1), (A2+B2)*(C2-D2), (A3+B3)*(C3-D3));
	return 0;
}
