#include <stdio.h>

int main(){
	int N, flag;
	scanf("%d", &N);
	int arr[N];

	for(int i=0;i<N;i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2==1){
		flag++;
		}
	}

	for(int j=0;j<N;j++){
		if(flag%2==1){
			if(arr[j]%2==1){
			arr[j]=0;
			break;
			}
		}
	}
	long long int sum=0;
	
	for(int k=0;k<N;k++){
		sum=sum+arr[k];
	}
	printf("%lld", sum);
	printf("\n");
	
	return 0;
}
