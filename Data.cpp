#include <stdio.h>
#include <string.h>

typedef struct{
    char name[51];
    int num;

}people;

people list[100], temp;

void sortNum(int N){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(list[j].num > list[j+1].num){
                temp = list[j+1];
                list[j+1] = list[j];
                list[j]= temp;
            }
        }
    }
}

void sortName(int N){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(list[j].num == list[j+1].num){
                if(strcmp(list[j].name, list[j+1].name)>0){
                    temp = list[j+1];
                    list[j+1] = list[j];
                    list[j]= temp;
                }
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        int N;
        scanf("%d", &N);
        getchar();

        for(int j=0;j<N;j++){
            scanf("%[^#]", &list[j].name);
            getchar();
            scanf("%d", &list[j].num);
            getchar();
        }
        sortNum(N);
        sortName(N);

        printf("Case #%d:\n", i+1);
        for(int j=0;j<N;j++){
            printf("%s - %d\n", list[j].name, list[j].num);
        }
    }
    return 0;
}
