#include<stdio.h>

typedef long long int lng;
long long int sum=0, count=0;

void swap(lng *xp, lng *yp)
{
    lng temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(lng arr[], int n)
{
   int i, j;
   for (i=0; i<n-1; i++)      
		for (j=0; j<n-i-1; j++) 
        	if (arr[j] > arr[j+1])
    			swap(&arr[j], &arr[j+1]);
}

typedef long long int lng;
int main(){
	long long int N;
	lng X[101], Y;
	scanf("%lld", &N);
  
	for (int i=0; i<N; i++){
    	scanf("%lld", &X[i]);
  	}
	bubbleSort(X,N);
	scanf("%lld", &Y);
  
	for (int j=0; j<N; j++){
		sum+=X[j];
    	count++;
    	if(sum==Y){
        	printf("%lld\n", count);
        	break;
    	}
		else if(sum>Y){
    		printf("%lld\n", count-1);
        	break;
    	}
		else if(j==N-1){
        	printf("%lld\n", count);
        	break;
    	}
	}
    return 0;
}
