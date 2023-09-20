#include <stdio.h>

char A[255][255];
int B=0;
void C(int N, int M){
    if (A[N][M]=='#' ||A[N][M]=='\n'||A[N][M]=='\0'){
    	return;
    }else if(A[N][M]=='*'){
		B++;
	}

    A[N][M]='#';

    C(N+1, M);
    C(N-1, M);
    C(N, M+1);
    C(N, M-1);
}

int main(){
    int T;
    scanf("%d", &T);
    
    for(int k=0;k<T;k++){
    	int N,M,o,p;
    	scanf("%d %d", &N,&M);
    
    	for(int i=0;i<N;i++){
        	for (int j =0; j<M; j++){
            	scanf("%c", &A[i][j]);
            	if (A[i][j]=='P')
            	{
                	o=i;
                	p=j;
            	}
        	}
    	}
    	C(o,p);
    	printf("Case #%d: %d\n", k+1, B);
    	B = 0;
    	o = 0;
    	p = 0;
        for (int i=0; i<255; i++){
            for (int j=0; j<255; j++){
                A[i][j] = '\0';
			}
		}
	}
	return 0;
}

