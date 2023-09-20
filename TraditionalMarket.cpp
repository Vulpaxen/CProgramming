#include <stdio.h>

int main(){
	int daging, sayur, telur;
	scanf("%d %d %d", &daging, &sayur, &telur);
		if (daging>sayur && daging>telur){
			if (sayur>telur){
			printf("Daging\nSayur\nTelur\n");
			}
				else printf("Daging\nTelur\nSayur\n");
		}
		else if (sayur>daging && sayur>telur){
			if (daging>telur){
			printf("Sayur\nDaging\nTelur\n");
			}
				else printf("Sayur\nTelur\nDaging\n");
		}
		else if (telur>daging && telur>sayur){
			if (daging>sayur){
			printf("Telur\nDaging\nSayur\n");
			}
				else printf("Telur\nSayur\nDaging\n");
		}
	return 0;
}
