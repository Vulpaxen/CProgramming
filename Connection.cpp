#include <stdio.h>

struct bio{
	char studkode[111];
	char studnama[111];
	char studjenis[111];
	char studbpk[111];
	char studibu[111];
	int sodara;
	};

struct lec{
	char leckode[111];
	char lecnama[111];
	char lecjenis[111];
	int totmurid;
	bio stud[111];
	};

int main(){
	int N;
	scanf("%d", &N);
	getchar();
	
	lec data[N];
	for(int i=0; i<N; i++){
		scanf("%[^\n]", data[i].leckode);
		getchar();
		scanf("%[^\n]", data[i].lecnama);
		getchar();
		scanf("%[^\n]", data[i].lecjenis);
		getchar();
		scanf("%d", &data[i].totmurid);
		getchar();

		for(int j=0; j<data[i].totmurid; j++){
			scanf("%[^\n]", data[i].stud[j].studkode);
			getchar();
			scanf("%[^\n]", data[i].stud[j].studnama);
			getchar();
			scanf("%[^\n]", data[i].stud[j].studjenis);
			getchar();
			scanf("%[^\n]", data[i].stud[j].studbpk);
			getchar();
			scanf("%[^\n]", data[i].stud[j].studibu);
			getchar();
			scanf("%d", &data[i].stud[j].sodara);
			getchar();
		}
	}
	
	int a;
	scanf("%d", &a);
	a=a-1;
	
	printf("Kode Dosen: %s\n", data[a].leckode);
	printf("Nama Dosen: %s\n", data[a].lecnama); 
	printf("Gender Dosen: %s\n", data[a].lecjenis); 
	printf("Jumlah Mahasiswa: %d\n", data[a].totmurid); 

	for(int j=0; j<data[a].totmurid; j++){
		printf("Kode Mahasiswa: %s\n", data[a].stud[j].studkode); 
		printf("Nama Mahasiswa: %s\n", data[a].stud[j].studnama); 
		printf("Gender Mahasiswa: %s\n", data[a].stud[j].studjenis); 
		printf("Nama Ayah: %s\n", data[a].stud[j].studbpk); 
		printf("Nama Ibu: %s\n", data[a].stud[j].studibu); 
		printf("Jumlah Saudara Kandung: %d\n", data[a].stud[j].sodara); 
	}
	return 0;
}
