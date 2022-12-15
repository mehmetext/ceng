#include <stdio.h>

int basamakTopla(int);

int main() {
	int sayi;
	
	printf("Sayi giriniz: "); scanf("%d", &sayi);
	
	printf("%d sayisinin basamaklarinin toplami: %d", sayi, basamakTopla(sayi));
	
	return 0;
}

//1324
//1320 + 4 -- 4 - 132
//130 + 2 -- 2 - 13
//10 + 3 -- 3 - 1
//0 + 1 -- 1 - 0

int basamakTopla(int sayi) {
	
	int toplam = 0;
	
	while (sayi != 0) {
		toplam += sayi % 10;
		sayi /= 10;
	}
	
	return toplam;
}
