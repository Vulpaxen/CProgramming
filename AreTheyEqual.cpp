#include <stdio.h>

int main(){
	int daging, sayur, telur;
	scanf("%d %d %d", &daging, &sayur, &telur);
		if (A>B && A>C){
			if (B>C){
			printf("Daging\nSayur\nTelur\n");
				else printf("Daging\nTelur\nSayur\n");
			}
		}
		else if (B>A && B>C){
			if (A>C){
			printf("Sayur\nDaging\nTelur\n");
				else printf("Sayur\nTelur\nDaging\n");
			}
		}
		else if (C>A && C>B){
			if (A>B){
			printf("Telur\nDaging\nSayur\n");
				else printf("Telur\nSayur\nDaging\n");
			}
		}
	return 0;
}
