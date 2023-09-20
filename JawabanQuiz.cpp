#include <stdio.h>
#include <string.h>

int main(){
	/*A*/
	/*
	int a, b;	//range 0..1000000
	int angkaAkhir, jumlah, kelipatan, aLast, bLast, t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		scanf("%d %d", &a, &b);		//99 + 999
		angkaAkhir = 0;		//angka hasil penjumlahan
		kelipatan = 1;			//penjumlahan dari kanan ke kiri (dari satuan, puluhan, ratusan, dst)
		while(a > 0 || b > 0){
			aLast = a % 10;		//ambil digit paling kanan, awalnya: 9, berikutnya: 9 0
			bLast = b % 10; 	//ambil digit paling kanan, awalnya: 9, berikutnya: 9 9
			jumlah = aLast + bLast;		//9 + 9 = 18
			if( jumlah >= 10 ){			//ambil belakangnya, satuannya
				jumlah -= 10;			//18 - 10 = 8
			}
			angkaAkhir += jumlah * kelipatan;	//ditambahkan ke angka terakhir, yang disimpan awalnya: 8, kemudian 8*10, kemudian 9*100
			a = (a > 0) ? a / 10 : 0;		//0/10 itu ngga bisa makanya dikasih kondisi
			b = (b > 0) ? b / 10 : 0;		//klo masih bisa dibagi 10, ambil hasil pembagiannya, klo ngga simpan 0 saja
			kelipatan *= 10;			//awalnya 1, 10, 100, dst..
		}
		printf("Case #%d: %d\n", tc, angkaAkhir);	//dapatnya 988
	}
	*/
	
	//B Max even number
	//2 4 5 6	-> 2 + 4 + 5 + 6 = 17 -> buang 5 jadi 12
	/*
	int n;
	long long angka, sum=0, angkaGanjilTerkecil=-1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld", &angka);
		sum += angka;
		if(angkaGanjilTerkecil == -1 && angka % 2 == 1){
			angkaGanjilTerkecil = angka;			//data yang diinput sudah terurut jadi angka ganjil terkecil pasti angka ganjil yang pertama diinput
		}
	}
	
	if(sum % 2 == 1){
		sum -= angkaGanjilTerkecil;
	}

	printf("%lld\n", sum);
	*/
	
	//C Fibonacci -> angka berikutnya merupakan hasil penjumlahan dua angka sebelumnya
	long long a, b, c;
	int t, n;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		a = 0;			//angka pertama
		b = 1;			//angka kedua
		scanf("%d", &n);
		if(n == 1) printf("Case %d: 0\n", tc);
		else if(n == 2) printf("Case %d: 1\n", tc);
		else{		//angka ketiga dst..
			for(int i=3; i<=n; i++){
				c = a + b;		//angka berikutnya
				a = b;
				b = c;
			}
		printf("Case #%d: %lld\n", tc, c);
		}
	}
	//0 1 1 2 3
	//a b c				//loop i=3
	//  a b c			//loop i=4
	//    a b c			//loop i=5
	return 0;
}
