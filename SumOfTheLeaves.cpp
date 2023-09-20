#include <stdio.h>

int A[205];

void B(int root, int tot){
    if(A[root] == 0)
    {
    }else{
    	tot += A[root];

		if(A[root*2] ==0 && A[root*2+1] ==0){
			printf("%d\n", tot);
    	}else{
    		B(root*2, tot);
    		B(root*2+1, tot);
    	}
	}
}

int main(){
    int T, N;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d", &N);
        for(int j=1; j<205; j++){
            A[j]=0; 
		}
		
        for(int j=1; j<=N; j++){
            scanf("%d", &A[j]);
        }
        
		printf("Case #%d:\n", i+1);
        B(1, 0);
    }
	return 0;
}
