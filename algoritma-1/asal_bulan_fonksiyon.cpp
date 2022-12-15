#include <stdio.h>

bool asal(int);

int main() {
	
	int sayi;
	
	printf("Asal kontrolu icin sayi giriniz: "); scanf("%d", &sayi);
	
	if (asal(sayi)) {
		printf("Girilen sayi asal sayidir! \n");
	} else {
		printf("Girilen sayi asal degildir! \n");
	}
	
	return 0;
}

bool asal(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}
