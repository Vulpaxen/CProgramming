#include <stdio.h>

int main(){
	char first[21], second[21], third[21], fourth[21], fifth[21];
	scanf("%s\n %s\n %s\n %s\n %s", first, second, third, fourth, fifth);
	printf("%10s|%s\n%10s|%s\n%10s|%s\n%10s|%s\n%10s|%s\n", first, first, second, second, third, third, fourth, fourth, fifth, fifth);
	return 0;
}
