#include <stdio.h>

void total(int a, char b, char c){
    if(a == 0){
        printf("%c", b);
    }else if(a == 1){
        printf("%c", c);
    }else{
        total(a-1, b, c);
        total(a-2, b, c);
    }
}

int main(){
    int T, n;
    char character, character2;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        scanf("%d %c %c", &n, &character, &character2);
        printf("Case #%d: ", i+1);
        total(n, character, character2);
        printf("\n");
    }
    return 0;
}
