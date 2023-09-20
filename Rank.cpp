#include <stdio.h>
#include <string.h>

typedef struct{
    char name[101];
    int score;
}
people;
people list[1001], temp;

void sort(int N){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(list[j].score < list[j+1].score){
                temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp;
            }
			else if(list[j].score == list[j+1].score){
                if(strcmp(list[j+1].name,list[j].name)<0){
                    temp = list[j+1];
                    list[j+1] = list[j];
                    list[j] = temp;
                }
            }
        }
    }
}

int linearSearch(int N,char input[]){
    for(int i=0;i<N;i++){
        if(strcmp(list[i].name,input)==0){
            return i+1;
        }
    }
}


int main(){
	int T;
    scanf("%d", &T);
    getchar();

    for(int i=1;i<=T;i++){
        int N;
        scanf("%d", &N);
        getchar();

        for(int j=0;j<N;j++){
            scanf("%[^#]#%d", &list[j].name, &list[j].score);
            getchar();
        }
      
        sort(N);
        char input[101];
        scanf("%s", &input);
        getchar();
        printf("Case #%d: %d\n", i, linearSearch(N,input));
	}
	return 0;
}
