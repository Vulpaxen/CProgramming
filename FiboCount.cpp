#include <stdio.h>

int fibo(int n){
    if(n==0||n==1){
    	return 1; 
    }else if(n==2){
    	return 3;
    }else{
    	return fibo(n-2) + fibo(n-1)+1;
    }
}

int main(){
    int n, T;
    scanf("%d", &T);
    
    for(int i=1; i<=T;i++){
    	scanf("%d", &n);
    	printf("Case #%d: %d\n", i, fibo(n));
	}
	return 0;
}
