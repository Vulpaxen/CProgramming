#include <stdio.h>
#include <string.h>

struct data{
	char nm[10000];
	char hp[14];
	char alamat[10000];
};

data arr[10000];
void linearSearch(int T,char str[]){
	int cnt=0;
	int tr=0;
	int n=strlen(str);
	for(int i=0;i<T;i++){
		for(int j=0;j<n;j++){
			if(arr[i].nm[j]==str[j]){
				cnt++;
				if(cnt==n){
					printf("%s %s %s\n",arr[i].nm,arr[i].hp,arr[i].alamat);
					tr++;
				}
			}			
		}
		cnt=0;
	}
	if(tr==0){
	printf("Data Not Exist\n");		
	}
}

int main(){
	int T, N;
	char str[10000];
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		scanf("%[^\n]s", &arr[i].nm); 
		getchar();
		scanf("%s", &arr[i].hp); 
		getchar();
		scanf("%[^\n]s", &arr[i].alamat); 
		getchar();	
	}
	scanf("%d", &N); 
	getchar();
	
	for(int i=0;i<N;i++){
		scanf("%[^\n]s", &str); 
		getchar();
		linearSearch(T,str);	
	}
	return 0;
}
