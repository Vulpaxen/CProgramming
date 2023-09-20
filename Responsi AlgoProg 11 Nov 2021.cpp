#include <stdio.h>
#include <string.h>

int main()
{
    /*
    int A[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int jumlah;
    //penjumlahan per baris
    for(int b=0; b<3; b++){     //per baris dari indeks 0..2
        jumlah = 0;             //tiap baris baru, set jumlah nya jadi 0 lagi
        for(int k=0; k<3; k++){ //per kolom dari indeks 0..2
            jumlah += A[b][k];  //jumlah ditambah dengan isi array A di baris b kolom k
        }
        printf("Baris %d = %d\n", b, jumlah);
    }

    //penjumlahan per kolom
    for(int k=0; k<3; k++){     //per kolom dari indeks 0..2
        jumlah = 0;             //tiap kolom baru, set jumlah nya jadi 0 lagi
        for(int b=0; b<3; b++){ //per baris dari indeks 0..2
            jumlah += A[b][k];  //jumlah ditambah dengan isi array A di baris b kolom k
        }
        printf("Kolom %d = %d\n", k, jumlah);
    }
    */
    /*
    int B[150][150] = {};       //kosongin array
    int baris, kolom;
    //minta input baris dan kolom dari user
    scanf("%d %d", &baris, &kolom);
    //minta input isi array B per baris per kolom
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            scanf("%d", &B[b][k]);
        }
    }
    
    printf("Jumlah per Baris array B:\n");
    //penjumlahan per baris
    int jumlah;
    for(int b=0; b<baris; b++){     //per baris dari indeks 0..baris-1
        jumlah = 0;             //tiap baris baru, set jumlah nya jadi 0 lagi
        for(int k=0; k<kolom; k++){ //per kolom dari indeks 0..kolom-1
            jumlah += B[b][k];  //jumlah ditambah dengan isi array B di baris b kolom k
        }
        printf("Baris %d = %d\n", b, jumlah);
    }
    //penjumlahan per kolom
    for(int k=0; k<kolom; k++){     //per kolom dari indeks 0..kolom-1
        jumlah = 0;             //tiap kolom baru, set jumlah nya jadi 0 lagi
        for(int b=0; b<baris; b++){ //per baris dari indeks 0..baris-1
            jumlah += B[b][k];  //jumlah ditambah dengan isi array B di baris b kolom k
        }
        printf("Kolom %d = %d\n", k, jumlah);
    }
    */
    /*
    char name[100][50];         //bisa menyimpan 100 nama yang masing-masing panjangnya 50 char maximal
    int n;
    
    scanf("%d", &n);            //mau input berapa nama, input berupa angka dan enter ('\n'), angka disimpan tapi sisa '\n' di buffer input
    getchar();                  //bersihin buffer input dengan membuang '\n'
    //bedanya getchar dan fflush
    //fflush ini klo di compiler seperti microsoft visual studio bisa, tapi di compiler lain itu undefined behaviour (ngga jelas bisa atau ngga)
    //karena secara standar fflush ini untuk membersihkan output buffer, bukan input
    //perkembangannya, seperti Microsoft membuat fflush bisa digunakan untuk membersihkan buffer input dengan fflush(stdin)
    for(int i=0; i<n; i++){
        scanf("%[^\n]", name[i] );      //mau masukin nama di baris ke-i
        getchar();              //bersihin buffer input dengan membuang '\n'
    }
    //klo di dalam program ada scan %d dan scan %s
    printf("\nCek isi array name:\n");
    for(int i=0; i<n; i++){
        printf("%s\n", name[i] );           //input string itu tidak perlu pake &name[i]
    }
    */
    
    /*
    int C[150][150];
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            scanf("%d", &C[b][k]);
        }
    }
    */
    
    //cari nilai max dalam array2D
    //asumsi nilai max adalah angka yg ada di array(0,0)
    /*
    int max = C[0][0];
    int min = C[0][0];
    for(int b=0; b<baris; b++){
        for(int k=0; k<kolom; k++){
            printf("%d ", C[b][k]);                 //baca satu-satu angkanya
            if( C[b][k] > max ) max = C[b][k];      //tiap kali ketemu yg lebih besar, update isi max
            if( C[b][k] < min ) min = C[b][k];      //tiap kali ketemu yg lebih kecil, update isi min
        }
        printf("\n");
    }
    
    printf("\nMax = %d", max);
    */
    //char nama[60];           //array1D cuma bisa simpan satu nama panjangnya maximal 60 char
    
    /*
    //array1D buat cari Modus, artinya bilangan yang paling sering muncul
    int n;          
    scanf("%d", &n);    //mau berapa banyak bilangan
    int angka[n];
    for(int i=0; i<n; i++){        //loop sebanyak n
        scanf("%d", &angka[i]);     //input angka, asumsi rangenya 0..100
    }
    //cari modus dengan memanfaatkan indeks array klo misalnya range angka yang diinput 100
    int angkaMax, freqMax;
    //asumsi max ada di angka pertama
    angkaMax = angka[0];        //klo rangenya start dari 0, boleh angkaMax = 0; tapi klo ada range minus, itu harus set dari angka[0]
    int freq[101]={};      //indeks 0..100, diset 0 dulu semuanya
    for(int i=0; i<n; i++){
        freq[ angka[i] ] += 1;      //frequensi angka berapa kali muncul, tiap kali muncul tambah 1
        if( freq[ angka[i] ] > freq[angkaMax] ) angkaMax = angka[i];    //klo ada yang lebih besar frequensinya dari frekuensi angkaMax, update angkaMax dengan angka tsb.
    }
    
    for(int i=0; i<=100; i++){
        if(freq[i] > 0) printf("%d muncul %d kali\n", i, freq[i] );
    }
    
    printf("\nModus terbanyak:\n");
    for(int i=0; i<=100; i++){          //i mewakili angka 0..100
        if(freq[i] == freq[angkaMax]){      //cek yang frequensinya sama banyaknya dengan freq terbanyak
            printf("Angka %d dengan frekuensi %d kali muncul\n", i, freq[ angka[i] ]);
        }
    }
    */
    
    //cari faktor suatu bilangan, bilangan bisa dibagi dengan faktor
    //buat cari bil prima potong prosesnya setengah
    //bilangan genap itu adalah bilangan yg bisa dibagi 2
    //int bilangan, countFaktor=0;
    //scanf("%d", &bilangan);
    /*
    printf("Faktor: ");
    for(int faktor=1; faktor<=bilangan; faktor++){
        if(bilangan % faktor == 0){
            printf("%d ", faktor);       //klo bilangan dibagi faktor sisanya 0 maka cetak faktor
            countFaktor++;             //countFaktor bertambah dengan 1
        }
    }
    */
    /*
    for(bilangan=10; bilangan <= 50; bilangan++ ){
        countFaktor = 0;
        printf("\n%d ", bilangan);
        if(bilangan % 2 == 0) printf("Bukan Prima");
        else{
            //cek dibagi sama bilangan ganjil
            for(int ganjil=1; ganjil<=bilangan/2; ganjil+=2){   //prosesnya bisa dipotong setengah
                if(bilangan % ganjil == 0){         //cek pasangan kiri
                    countFaktor+=2;     //hitung sepasang, faktor merupakan hasil perkalian sepasang angka
                }
            }
            //7 % 1, 3
            //23 % 1, 3, 5, 7, 11
            //21 % 1, 3, 5, 7
            if(countFaktor == 2) printf("Bilangan Prima");
            else printf("Bukan Prima");
        }
    }
    */
    /*
    //ubah huruf besar jadi kecil dan sebaliknya
    //kode ascii 'a' = 97, 'A' = 65     selisih 32
    char kata[100];
    scanf("%[^\n]", kata);
    int panjangKata = strlen(kata);         //string length, hitung panjang string
    for(int i=0; i<panjangKata; i++){
        //cek klo huruf kecil
        if('a' <= kata[i] && kata[i] <= 'z'){   //coba pake isLower
                                    //toUpper
            kata[i] -= 32;          //'a' = 97 buat jadi huruf besar dikurang 32 jadi 65
        }
        else if('A' <= kata[i] && kata[i] <= 'Z'){  //coba pake isUpper
                                    //toLower -> include <ctype.h>
            kata[i] += 32;          //'A' = 65 buat jadi huruf kecil ditambah 32 jadi 97
        }
    }
    printf("%s", kata);
    */
    
    //cari 2 angka max terbesar
    /*
    int n;
    scanf("%d", &n);
    int angka[n];
    for(int i=0; i<n; i++){
        scanf("%d", &angka[i] );
    }
    
    int max1, max2;
    max1 = angka[0];
    max2 = angka[0];
    for(int i=1; i<n; i++){
        if(angka[i] > max1){
            max2 = max1;            //simpan dulu jadi yang terbesar kedua
            max1 = angka[i];
        }
    }
    printf("Max1 = %d\n", max1);
    printf("Max2 = %d\n", max2);
    */
    
    //ubah isi char dalam array indeks ke-?
    /*
    char name[100];
    int index;
    scanf("%d", &index);
    char c;
    scanf("%c", &c);
    name[index] = c;    //ubah satu character
    */
    
    return 0;
}
