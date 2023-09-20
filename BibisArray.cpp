#include <stdio.h>
int main(){
	long int T,N;
	long int arr[200000];
	scanf("%ld", &T);
	
	for(int i=0; i<T; i++){
		scanf("%ld", &N);
		long int x=0;
		long int y=0;
		long int arrA[N],arrB[N];
		
		for(int j=0; j<200000; j++){
		arr[j]=0;
		}
		
		for(int j=0; j<N; j++){
			scanf("%Ld",&arrA[j]);
			arr[arrA[j]]++;
			if(arr[arrA[j]]>=x){
				x=arr[arrA[j]];
			}
		}
		for(int j=0; j<200000; j++){
			if(x==arr[j]){
				y++;
				arrB[y]=j;
			}
		}
		printf("Case #%ld: %ld\n", i+1, x);
		printf("%ld", arrB[1]);
		for(int i=2; i<=y; i++){
			printf(" %ld", arrB[i]);			
		}
		printf("\n");
	}
	return 0;
}
