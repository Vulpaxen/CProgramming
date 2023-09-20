#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	for (int i=0; i<T ; i++){
		int N;
		long long int total=0;
		scanf("%d", &N);
		for (int j=0;j<N;j++){
			long long int arr[j];
			scanf("%lld", &arr[j]);
			total +=arr [j];
		}
		printf("Case #%d: %lld\n", i+1, total);
	}
	return 0;
}
