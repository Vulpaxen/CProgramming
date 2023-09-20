#include <stdio.h>

char a[255][255];
int b=0;
void c (int x, int y){
    if (a[x][y]=='#' ||a[x][y]=='\n'||a[x][y]=='\0')
    {
    return;
    }else if(a[x][y]=='*'){
	b++;}

    a[x][y]='#';

    c(x+1, y);
    c(x-1, y);
    c(x, y+1);
    c(x, y-1);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int t=0;t<T;t++){
    int x,y,e,f;
    scanf("%d %d", &x, &y);
    getchar();
    for(int i=0; i<x; i++){
        for (int j=0; j<y; j++)
        {
            scanf("%c", &a[i][j]);
            if (a[i][j]=='P')
            {
                e=i;
                f=j;
            }
        }
        getchar();
    }
    c(e,f);
    printf("Case #%d: %d\n", t+1, b);
    b = 0;
        e = 0;
        f = 0;
        for (int i=0; i<255; i++){
              for (int j=0; j<255; j++){
                a[i][j] = '\0';
			}
		}
}


return 0;
}

