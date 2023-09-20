#include <stdio.h>

int main(){
	int sum, number1, number2;
	scanf("%d", &sum);
	number1 = sum/2;
	number2 = sum-number1;
	printf("%d = %d + %d\n", sum, number1, number2);
	return 0;
}
