#include <stdio.h>
#include <string.h>

typedef struct{
    char nim[21];
    char nama[21];
}people;

people list[1000],temp;

void sort(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(list[j].nim,list[j+1].nim)>0){
                temp = list[j+1];
                list[j+1] = list[j];
                list[j]= temp;
            }
        }
    }
}

int main(){

    FILE *fp = fopen("testdata.in","r");

    int n;
    while(!feof(fp)){
    
        fscanf(fp,"%d\n",&n);

        for(int i=0;i<n;i++){
            fscanf(fp,"%s %s",&list[i].nim,&list[i].nama);
        }
    }
    sort(n);
    for(int i=0;i<n;i++){
        printf("%s %s\n",list[i].nim,list[i].nama);
    }

    fclose(fp);

    return 0;
}
