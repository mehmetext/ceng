#include <stdio.h>

int main() {
	char metin[100];
	int length = 0;
	int difference = 'a' - 'A';
	
	printf("Metin gir: "); gets(metin);
	
	for (length = 0; metin[length] != '\0'; length++);
	
	for (int i  = 0; i < length; i++) {
		if (metin[i] < 'A' || metin[i] > 'z') continue;
		
		if (metin[i] < 'Z' + 1) {
			metin[i] = metin[i] + difference;
		} else {
			metin[i] = metin[i] - difference;
		}
	}
	
	printf("Donusturulen Metin: %s", metin);
	
	
	return 0;
}
