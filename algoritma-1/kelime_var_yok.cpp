#include <stdio.h>

int main() {
	char a[100], b[20];
	int aLength = 0, bLength = 0, foundIndex = 0;
	bool isFound = false;
	
	printf("Kontrol edilecek cumleyi giriniz: "); gets(a);
	printf("Aranacak kelime: "); gets(b);
	
	for (aLength = 0; a[aLength] != '\0'; aLength++);
	for (bLength = 0; b[bLength] != '\0'; bLength++);
	
	//abcd	=> 4
	//bc	=> 2
	
	/*
		a - b
		b - c
		
		b - b
		c - c
			
		c - b
		d - c
	*/
	
	for (int i = 0; i < aLength - bLength + 1; i++) {
		bool control = true;
		
		for (int j = 0; j < bLength; j++) {
			if (a[i+j] != b[j]) {
				control = false;
				break;
			}
		}
		
		if (control) {
			isFound = true;
			foundIndex = i + 1;
			break;
		}
	}
	
	if (isFound) {
		printf("Kelime bulundu! Pozisyonu: %d", foundIndex);
	} else {
		printf("Kelime bulunamadi!");
	}
	
	return 0;
}
