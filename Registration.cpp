#include <stdio.h>

int main(){
	int N[10], O;
	char M[100], C;
	scanf("%s\n", &N);
	scanf("%[^\n]\n", &M);
	scanf("%c %d", &C, &O);
	
	printf("Id    : %s\n", N);
	printf("Name  : %s\n", M);
	printf("Class : %c\n", C);
	printf("Num   : %d\n", O);
	return 0;
}
