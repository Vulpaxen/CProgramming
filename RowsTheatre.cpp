#include <stdio.h>

int main(){
	int T, N;
  	scanf("%d", &T);
  	int arr[2000];
  
  	for(int i=1;i<=T;i++){
      	scanf("%d", &N);
    	for(int j=1;j<=N;j++){
        	scanf("%d", &arr[j]);
      	}
      	
    	for(int x=1;x<=N-1;x++){
    		for(int y=1;y<=N-x;y++){
          		if(arr[y]>arr[y+1]){
            		int temp=arr[y];
            		arr[y]=arr[y+1];
            		arr[y+1]=temp;
          		}
        	}
      	}

		int tampung=N/2;
   		int penampung;
    	int max=0;

    	for(int j=1;j<tampung;j++){
    		penampung = arr[j+1]-arr[j];
        	if(penampung>max){
          		max=penampung;
       		}
    	}
    	
      	for(int j=tampung+1;j<N;j++){
        	penampung = arr[j+1]-arr[j];
        	if(penampung>max){
          		max=penampung;
        	}
      	}
      	printf("Case #%d: %d\n", i, max);
  	}
	return 0;
}
