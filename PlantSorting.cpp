#include <stdio.h>
#include <string.h>

void bubbleSort (char R[][1111], char M[][1111], int T){
	char temp1[1111], temp2[1111];
	
	for (int i=0; i<T; i++){
		for (int j=0; j<T-i-1;j++){
			if(strcmp(M[j],M[j+1])>0){
			    strcpy(temp1,M[j]);
			    strcpy(M[j],M[j+1]);
			    strcpy(M[j+1],temp1);
			    strcpy(temp2,R[j]);
			    strcpy(R[j],R[j+1]);
			    strcpy(R[j+1],temp2);
			}			
		}
	}	
}

int main(){
	FILE *fp=fopen("testdata.in","r");
	int T, i=0;
	char R[1111][1111];
	char M[1111][1111];
	fscanf(fp,"%d\n", &T);
	
	for(int i=0;i<T;i++){
    	fscanf(fp,"%[^#]#%[^\n]\n", R[i], M[i]);
	}
	
	bubbleSort(R, M, T);
	for(int i=0;i<T;i++){
    	printf("%s %s\n", R[i], M[i]);
	}
	return 0;
}
