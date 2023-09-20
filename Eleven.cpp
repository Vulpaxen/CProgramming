#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    char N[100000];
    
    for(int i=0; i<T; i++){
    	scanf("%s", N);
    	int len=strlen(N);
    	int temptot1=0, temptot2=0, tot=0;
    	
    	for(int a=0; a<len; a++){
    		if(a%2==0){
    			temptot1+= N[a]-'0';
    		}else{
    			temptot2+= N[a]-'0';
    		}
		}
    	tot=temptot1-temptot2;
    
    	if(tot%11==0){
    		printf("Case #%d: Yeah\n", i+1); 
    	}else{
    		printf("Case #%d: Nah\n", i+1);
		}
	}
	return 0;
}
