#include <stdio.h>

int main() {
	char metin[300];
	int A = 'A', a = 'a', Z = 'Z', z = 'z';
	int alfabe[Z-A+1] = {};
	
	printf("Metin gir: "); gets(metin);
	
	for (int i = 0; metin[i] != '\0'; i++) {
		if (metin[i] < A || metin[i] > z) continue;
		
		if (metin[i] > Z) metin[i] -= (a-A);
		
		alfabe[metin[i] - A]++;
		
		//printf("%c harfi %d. harf oluyor. \n", metin[i], metin[i] - A);
	}
	
	for (int i = 0; i < Z-A+1; i++) printf("%c harfinden %d adet bulunmaktadir. \n", A+i, alfabe[i]);
}
