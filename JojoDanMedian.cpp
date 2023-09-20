#include<stdio.h>
struct items{
	char ID[10], name[18];
	long long int price;
};

int main(){
	int N;
	scanf("%d", &N);
	items arr[N];
	
	for(int i=0; i<N; i++){
		scanf(" %[^\n]", &arr[i].ID);
		scanf(" %[^\n]", &arr[i].name);
		scanf("%lld", &arr[i].price);
	}
	
	int median;
	if(N%2==0){	
		median=(N/2)-1;
	}else{
		median=N/2;
	}

	for(int i=0; i<N; i++)
	{
		if(N%2==0){
			if(arr[i].price >= (arr[median].price+arr[median+1].price)/2){
				printf("%s %s\n",arr[i].ID, arr[i].name);
			}
		}else{
			if(arr[i].price >= arr[median].price){
				printf("%s %s\n", arr[i].ID, arr[i].name);
			}
		}
	}
	return 0;
}
