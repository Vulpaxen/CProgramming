#include <stdio.h>	

struct data{
	char id[21];
	char name[101];
	int age;
};
data arr[1001];

int main(){
	int N, Q, X;
	scanf("%d", &N);

	for(int i=1;i<=N;i++){
		scanf("%s", &arr[i].id); 
		getchar();
		scanf("%[^\n]s", &arr[i].name); 
		getchar();
		scanf("%d", &arr[i].age); 
		getchar();
	}
	scanf("%d", &Q);
	
	for(int i=1;i<=Q;i++){
		scanf("%d", &X);
		printf("Query #%d:\n", i);
		printf("ID: %s\n", arr[X].id);
		printf("Name: %s\n", arr[X].name);
		printf("Age: %d\n", arr[X].age);
	}	
    return 0;
}
