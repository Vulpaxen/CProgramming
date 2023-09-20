#include <stdio.h>

typedef struct{
    char nama[101];
    char nim[10];
    char age[10];
    char kode[10];
    char tempat[101];
    char tgl[101];
    char skolah[101];
    char sibling[10];
    char tinggi[10];
    char norek[10];

}a;
a list[101];

int main(){
    int N;
    scanf("%d", &N);
    getchar();

    for(int i=0;i<N;i++){
        scanf("%[^\n]",list[i].nama);
        getchar();
        scanf("%[^\n]",list[i].nim);
        getchar();
        scanf("%[^\n]",list[i].age);
        getchar();
        scanf("%[^\n]",list[i].kode);
        getchar();
        scanf("%[^\n]",list[i].tempat);
        getchar();
        scanf("%[^\n]",list[i].tgl);
        getchar();
        scanf("%[^\n]",list[i].skolah);
        getchar();
        scanf("%[^\n]",list[i].sibling);
        getchar();
        scanf("%[^\n]",list[i].tinggi);
        getchar();
        scanf("%[^\n]",list[i].norek); 
		getchar(); 
    }
	
	for(int j=0;j<N;j++){
        printf("Mahasiswa ke-%d:\n",j+1);
        printf("Nama: %s\n",list[j].nama);
        printf("NIM: %s\n",list[j].nim);
        printf("Umur: %s\n",list[j].age);
        printf("Kode Pos: %s\n",list[j].kode);
        printf("Tempat Lahir: %s\n",list[j].tempat);
        printf("Tanggal Lahir: %s\n",list[j].tgl);
        printf("Almamater SMA: %s\n",list[j].skolah);
        printf("Jumlah Saudara Kandung: %s\n",list[j].sibling);
        printf("Tinggi Badan: %s\n",list[j].tinggi);
        printf("NOMOR REKENING: %s\n",list[j].norek);
    }
    return 0;
}
