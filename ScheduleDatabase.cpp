#include <stdio.h>

int main(){
	int N, Q;
	char code[1000][10], day[1000][10];
	int time[1000];
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%s\n", &code[i]);
		scanf("%s\n", &day[i]);
		scanf("%d", &time[i]);
	}
	
	scanf("%d", &Q);
	int X[Q];
	
	for(int i=0; i<Q; i++){
		scanf("%d", &X[i]);
		printf("Query #%d:\n", i+1);
		printf("Code: %s\n", code[X[i]-1]);
		printf("Day: %s\n", day[X[i]-1]);
		
		if(time[X[i] - 1]<10){
			printf("Time: 0%d:00\n", time[X[i]-1]);
		}else{
			printf("Time: %d:00\n", time[X[i]-1]);
		}
	}
	return 0;
}
