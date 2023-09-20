#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);//scan jumlah segmen garis
	int a[n];
	int flag=0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);//scan panjang ruas garis
	}

	for(int i=0; i<n; i++){
		if(a[i] + a[i+1] > a[i+2] && a[i] + a[i+2] > a[i+1] && a[i+1] + a[i+2] > a[i]){
			flag = 1;//mengecek jika merupakan segitiga nondegenerate, jika iya maka flag = 1
		}
	}

	if(flag==1){
		printf("YES\n");//flag=1 maka segitiga nondegenerate
	}
	else if(flag==0){
		printf("NO\n");//flag=1 maka bukan segitiga nondegenerate
	}
	return 0;
}
