#include <stdio.h>
#include <string.h>

int main(){
	int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
    	char S[100001];
    	scanf("%s", &S);
    	int count=0;
    	int checked[26] = {0};

    	for(int j=0; j<strlen(S); j++){
        	if(checked[S[j]-97] == 0){
            	checked[S[j]-97]++;
            	count++;
        	}
    	}

    	if(count%2 == 0){
        	printf("Case #%d: Breakable\n", i+1);
    	}else{
        	printf("Case #%d: Unbreakable\n", i+1);
    	}
    }
	return 0;
}
