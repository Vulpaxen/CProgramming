#include <stdio.h>
int main(){
	int N,Q,dayA,dayB;
	int views[100];
	scanf("%d", &N);
	
	for(int i=1;i<=N;i++){
		scanf("%d", &views[i]);
	}
	
	scanf("%d", &Q);
	for(int j=1;j<=Q;j++){
		scanf("%d %d",&dayA,&dayB);
		int total = 0;
		for(int i=dayA;i<=dayB;i++){	
			total+=views[i];
		}
		printf("Case #%d: %d\n",j,total);
	}
    return 0;
}
