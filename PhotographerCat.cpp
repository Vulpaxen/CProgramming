#include <stdio.h>

int main(){
	int C, N, arr[10000];
	scanf("%d", &C);
	
	for(int i=0;i<C;i++){
		scanf("%d", &N);
		
		for(int k=0;k<N;k++){
			scanf("%d", &arr[k]);
		}
		int temp;
		int min=1000000;
		
		for(int x=0;x<N;x++){
			for(int y=x+1;y<N;y++){
                if(arr[y]<arr[x]){
                temp=arr[x]-arr[y];
                }
				else{
                temp=arr[y]-arr[x];
                }
                if(temp<min){
                min=temp;
            	}
			}
		}
	printf("%d\n", min);
	}
}

