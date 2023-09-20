#include <stdio.h>

struct data{
	int Q;
	long long int price;
	char N[105];	
};//data untuk input

int main(){
	int C;
	struct data data[105];
	FILE *fp = fopen("testdata.in","r");//open file testdata.in
	fscanf(fp,"%d\n", &C);//mengscan pelanggan datang
	for(int i=0;i<C;i++){
		int F;
		long long int sum=0;
		char N[105];
		fscanf(fp,"%d\n", &F);//mengscan jumlah alat musik
		for(int j=0;j<F;j++){
			fscanf(fp,"%d#%[^@]@%lld\n", &data[j].Q, &data[j].N, &data[j].price);//mengscan total kuantitas, nama alat musik, dan harga alat musik
			sum+=data[j].Q*data[j].price;//menghitung total kuantitas dikali dengan harga alat musik
		}
		printf("Customer #%d: Rp %lld\n", i+1, sum-(sum*15/100));//output customer keberapa dan harga setelah diskon
	}
	fclose(fp);
	return 0;
}
