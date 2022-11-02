#include <stdio.h>

//Klavyeden 10 elemanl� 2 tamsay� dizisi girildikten sonra
//ilk dizinin �ift indisleri ile ikinci dizinin tek indislerini
//yer de�i�tiren program kodunu yaz�n�z.

int sayiAdet = 10;

int main() {
	
	int dizi1[sayiAdet], dizi2[sayiAdet];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < sayiAdet; j++) {
			int sayi;
			printf("%d. listenin %d. elemanini giriniz: ", i+1, j+1); scanf("%d", &sayi);
			if (i == 0) dizi1[j] = sayi; else dizi2[j] = sayi;
		}
	}
	
	for (int i = 0; i < sayiAdet; i += 2) {
		int temp = dizi1[i];
		dizi1[i] = dizi2[i+1];
		dizi2[i+1] = temp;
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < sayiAdet; j++) {
			if (i == 0) {
				printf("\n%d. listenin %d. elemani: %d", i+1, j+1, dizi1[j]);
			} else {
				printf("\n%d. listenin %d. elemani: %d", i+1, j+1, dizi2[j]);
			}
		}
	}
	
	return 0;
}
