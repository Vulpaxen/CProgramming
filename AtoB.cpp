#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    for(int i=1; i<=T;i++){
        int A,B;
        scanf("%d %d", &A, &B);
        
        while(A!=B){
            if(A==1){
            	A=1;
			break;
            }else if(A%2 == 0){
                A = A/2; 
            }else if(A%2 == 1){
                A = A*3 +1;
            }
        }
        
        if(A==B){
            printf("Case #%d: YES\n", i);
        }else{
            printf("Case #%d: NO\n", i);
        }
    }
    return 0;
}
