#include <stdio.h>

int main() {
	char metin[100];
	int boslukSayisi = 0;
	
	printf("Metin giriniz: "); gets(metin);
	
	for (int i = 0; metin[i] != '\0'; i++) {
		if (metin[i] == ' ') boslukSayisi++;
	}
	
	printf("Girilen metindeki kelime sayisi: %d", ++boslukSayisi);
	
	return 0;
}
