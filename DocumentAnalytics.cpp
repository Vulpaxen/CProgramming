#include <stdio.h>
#include <string.h>

char map[111][111];
int col,row;
int count;

int main(){
	FILE *fp = fopen("testdata.in","r");
    
    int X, flag=0, page=0;
    fscanf(fp,"%d", &X);
    
	while(!feof(fp)){
        int count=0;
		char word[111];
        fscanf(fp,"%s\n", &word);
        
        while(strcmp(word,"#")!=0){
            fscanf(fp,"%s\n", &word);
            count++;
        }
        page++;
        
        if(count < X){
            printf("page %d: %d word(s)\n", page, count);
            flag++;
        }
    }
    
    if(flag==0){
    	printf("The essay is correct\n");
	}
	
	fclose(fp);
	return 0;
}
