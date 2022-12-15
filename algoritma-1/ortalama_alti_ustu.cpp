#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Klavyeden girilen 50 adet tamsayý bir diziye aktarýldýktan sonra, 
//bu dizi elemanlarýnýn ortalamasýný ve dizideki kaç elemanýn ortalamanýn altýnda, 
//kaç elemanýn ortalamanýn üstünde olduðunu ekrana yazdýran program kodunu yazýnýz.

int sayiAdet = 50;

int main() {
	
	srand(time(NULL));
	
	int sayilar[sayiAdet], toplam = 0, ortAlti = 0, ortUstu = 0;
	float ortalama = 0;
	
	for (int i = 0; i < sayiAdet; i++) {
		//printf("%d. sayiyi giriniz: ", i+1); scanf("%d", &sayilar[i]);
		sayilar[i] = (rand() % 100) + 1;
		toplam += sayilar[i];
	}
	
	ortalama = (1.0 * toplam / sayiAdet);
	
	printf("Ortalama: %f", ortalama);
	
	for (int i = 0; i < sayiAdet; i++) {
		if (sayilar[i] > ortalama) ortUstu++;
		else if (sayilar[i] < ortalama) ortAlti++; 
	}
	
	printf("\nOrtalamanin altindaki adet: %d", ortAlti);
	printf("\nOrtalamanin ustundeki adet: %d", ortUstu);
	
	return 0;
}
