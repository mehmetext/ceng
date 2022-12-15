#include <stdio.h>

int main() {
	char a[100], b[100];
	int aLength = 0, bLength = 0, foundCount = 0;
	bool isFound = false;
	int foundIndexes[100];
	
	printf("Kontrol edilecek metin: "); gets(a);
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
			printf("a => %c - b => %c \n", a[i+j], b[j]);
			
			if (a[i+j] != b[j]) {
				control = false;
				break;
			}
		}
		
		if (control) {
			isFound = true;
			foundIndexes[foundCount] = i + 1;
			foundCount++;
		}
		
		printf("\n");
		
	}
	
	if (isFound) {
		printf("Kelime bulundu! Pozisyonlar: %d", foundIndexes[0]);
		for (int i = 1; i < foundCount; i++) printf(", %d", foundIndexes[i]);
	} else {
		printf("Kelime bulunamadi!");
	}
	
	return 0;
}
