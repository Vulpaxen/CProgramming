#include <stdio.h>

int main(){
	int T, N;
	long long int sum, greater;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		long long int arr[N];
		for(int j=0;j<N;j++){
			scanf("%lld", &arr[j]);
		}
		long long int sum = 0;
		for(int j=0;j<N;j++){
			sum+=arr[j];
		}
		long long int greater = 0;
		for(int j=0; j<N;j++){
			if(arr[j]>sum){
			greater++;
			}
		}
		printf("Case #%d: %lld\n%lld\n", i+1, sum, greater);
	}
	return 0;
}
