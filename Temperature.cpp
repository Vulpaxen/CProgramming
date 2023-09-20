#include <stdio.h>
#include <string.h>

struct data{
	char cityName[1001];
	float temperature;
	char metric;
}
city[101];

void sort(int N){
	struct data temp;
	
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-i-1; j++){
			if(city[j].temperature > city[j+1].temperature){
				temp = city[j];
				city[j] = city[j+1];
				city[j+1] = temp; 
			}
			else if(city[j].temperature == city[j+1].temperature){
				if(strcmp(city[j].cityName, city[j+1].cityName) > 0){
					temp = city[j];
					city[j] = city[j+1];
					city[j+1] = temp;
				}
			}
		}
	}
}

int main(){
	int N=0;
	FILE *in = fopen("testdata.in", "r");

	while(!feof(in)){
		fscanf(in, "%[^#]#%f#%c\n", &city[N].cityName, &city[N].temperature, &city[N].metric);
		N++;
	}
	fclose(in);

	for(int i=0; i<N; i++){
		if(city[i].metric == 'F'){
			city[i].temperature = ((city[i].temperature - 32) *5) / 9;
		}
	}

	sort(N);
	for(int i=0; i<N; i++){
		if(city[i].metric == 'F'){
			city[i].temperature = ((city[i].temperature * 9)/ 5) + 32;
		}
	}
	
	for(int i=0; i<N; i++){
		printf("%s is %.2f%c\n", city[i].cityName, city[i].temperature, city[i].metric);
	}
	return 0;
}
