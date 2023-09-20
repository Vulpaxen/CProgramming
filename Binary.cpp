#include <stdio.h>

int main(){
    int T, arr[1000];
	long long int X, P;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
    	scanf("%lld %lld", &X, &P);
		int flag=0;
		for(int j=0;X>0;j++){
			arr[j]= X%2;
			X=X/2;
			flag++;
		}
	printf("%lld\n", arr[P]);
	}
    return 0;
}
