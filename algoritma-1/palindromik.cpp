#include <stdio.h>

int main() {
	char metin[100];
	int uzunluk = 0;
	bool palindromik = true;
	
	printf("Metin giriniz: "); gets(metin);
	
	for (uzunluk = 0; metin[uzunluk] != '\0'; uzunluk++);
	
	for (int i = 0; i < uzunluk; i++) {
		char ilk = metin[i];
		char son = metin[uzunluk - i - 1];
		
		//printf("%d. karakter = %c - %d. karakter = %c \n", i+1, metin[i], uzunluk-i, metin[uzunluk - i - 1]);
		
		if (ilk != son) {
			palindromik = false;
			break;
		}
		
	}
	
	if (palindromik) {
		printf("Girilen metin palindromiktir!");
	} else {
		printf("Girilen metin palindromik degildir!");
	}
	
	return 0;
}
