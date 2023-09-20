#include <stdio.h>
#include <string.h>

int main(){
	int HH;
	char S[12][10005];
	char MM[5];
 
	for(int i=0; i<2; i++){
		int coor = 0;
  		int flag = 0;
  		bool flag1 = false;
  		scanf("%d:%[^>]>%[^\n]", &HH, &MM);

  		while(scanf("%s ", S[flag]) != NULL){
			flag++;
  		}
  		int len = 0;
  		len = strlen(S[MM[0]-'0']); // biar cek kalo ada atau nggak
  	
  		if(len>0){
   			for(int j=0; j<len; j++){
    			coor = (coor + S[MM[0]-'0'][j])%180;
   			}
  		}
  	
  		if(HH >= 12){ //jika lebih besar dari 0, maka flag true
   			if(MM[1] > '0'){
    			flag1 = true;
   			}
  		}
  
  		if(flag1 == true){
			coor *= -1;
  		}

  		if(i == 0){
		  	printf("Case #%d: %d, ", i+1, coor);
  		}else{
   			printf("%d\n", coor);
  		}
	}
	return 0;
}
