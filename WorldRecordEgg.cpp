#include <stdio.h>

int main(){
	int T, N;
	long long day0, day1, day2;
	scanf("%d", &T);
	day0=0;
	day1=1;
	for (int i=1;i<=T;i++){
		scanf("%d", &N);
		if(N==1){
			printf("Case #%d: 0\n", i);
		}
		else if(N==2){
			printf("Case #%d: 1\n", i);
		}
		else{
			for(int j=3;j<=N;j++){
				day2=day0+day1;
				day0=day1;
				day1=day2;
			}
		}
	printf("Case #%d: %lld\n", i, day2);
	}
	return 0;
}

