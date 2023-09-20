#include <stdio.h>
#include <string.h>

char map[111][111];
int col, row, count;

void move(int currY,int currX){
    if(currY<0||currX<0||currY>=col||currX>=row||map[currY][currX]=='#'){
        return;
    }
    else if(map[currY][currX]=='.'){
        count++;
        map[currY][currX]='#';
    }
    move(currY-1,currX);
    move(currY+1,currX);
    move(currY,currX+1);
    move(currY,currX-1);
}

int main(){
	int T;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        count=0;
        scanf("%d %d", &col, &row);

        for(int j=0;j<col;j++){
            scanf("%s", map[j]);
        }
        
        for(int j=0;j<col;j++){
            for(int k=0;k<row;k++){
                if(map[j][k]=='S'){
                    move(j,k);
                }
            }
        }
		printf("Case #%d: %d", i+1, count);
        puts("");
    }
	return 0;
}
