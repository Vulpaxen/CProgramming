#include<stdio.h>
#include<string.h>

int main(){
	int R,C;
	scanf("%d %d", &R, &C);
	char arr[R+5][C+5];
	
	for (int i=0;i<R;i++){
		scanf("%s", arr[i]);	
	}
	
	for (int x=0;x<R;x++){
		for (int i=0;i<C-1;i++){
			for (int j=i+1;j<C;j++){
				if (arr[x][i]>arr[x][j]){
					char temp=arr[x][i];
					arr[x][i]=arr[x][j];
					arr[x][j]=temp;
				}
			}
		}
	}
	
	for (int i=0;i<R-1;i++){
		for (int j=i+1;j<R;j++){
			if (strcmp(arr[i],arr[j])<0){
				char temp[C+5];
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	
	for (int i=0;i<R;i++){
		printf("%s\n", arr[i]);
	}
	return 0;
}
