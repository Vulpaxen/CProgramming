#include <stdio.h>

int cnt=0, cnt1=0, N=0;
int map[10000][10000];

void spc(int cnt,int cnt1){
	if(cnt>cnt1){
		printf(" and ");
		cnt1=cnt;
	}	
}

void src(int ctr,int mx,int my){
	
	if(ctr==map[mx+1][my]){
		printf("(%d,%d)",mx+1,my);
		cnt++;
	}

	spc(cnt,cnt1);

	if(ctr==map[mx-1][my]){
		printf("(%d,%d)",mx-1,my);
		cnt++;
	}

	spc(cnt,cnt1);
	
	if(ctr==map[mx][my+1]){
		printf("(%d,%d)",mx,my+1);
		cnt++;
	}
	
	spc(cnt,cnt1);
	
	if(ctr==map[mx][my-1]){
		printf("(%d,%d)",mx,my-1);
		cnt++;
	}else if(cnt==0){
		src(ctr,mx+1,my);
		src(ctr,mx-1,my);
		src(ctr,mx,my+1);
		src(ctr,mx,my-1);
	}
};

int main(){
	scanf("%d", &N);
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d", &map[i][j]);	
		}
	}	

	int mx=N/2;
	int my=N/2;
	int ctr=map[N/2][N/2];		
	
	printf("Nearest same elements is at:");
	src(ctr,mx,my);
	
	if(cnt==0){
		printf("No nearest element");
	}
    return 0;
}
