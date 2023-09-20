#include <stdio.h>

int main(){
	int N, j, l, b, arrB[100], average;
	scanf("%d\n %d %d %d", &N, &j, &l, &b);
	N--;

	for (int i=0;i<=N;i++){
		scanf("%d", &arrB[i]);
	}
	average = j+l+b;
	
	for (int i=N;i>=0;i--){
		average+=arrB[i];
	}
	average = average/((N+1)+3);

	if (j>=average){
		printf("Jojo lolos\n");
	}
	else{
		printf("Jojo tidak lolos\n");
	}
	if (l>=average){
		printf("Lili lolos\n");
	}
	else{
		printf("Lili tidak lolos\n");
	}
	if (b>=average){
		printf("Bibi lolos\n");
	}
	else{
		printf("Bibi tidak lolos\n");
	}
	return 0;
}
