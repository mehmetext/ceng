#include <stdio.h>

int main() {
	
	int number, counter = 0, total = 0;
	
	printf("Lutfen bir sayi giriniz: "); scanf("%d", &number);
	
	for (int i = 1; i < (number + 1); i++) {
		if (i % 2 == 0) {
			total += i;
			counter++;
		}
	}
	
	printf("Girilen sayiya kadar olan cift sayilarin toplami: %d", total);
	printf("\nOrtalamasi: %d", total / counter);
	
	
	return 0;
}
