#include <stdio.h>

int main(){
    int X,Y;
    scanf("%d\n%d", &X, &Y);
    for (int i=X;i<=Y;i++){
        if (i%7==6 && i%5==4 && i%3==2){
            printf("%d\n", i);
        }
    }
	return 0;
}
