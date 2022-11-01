#include <stdio.h>

int main(){
	int a = 10;
	int b = 3, c = 4;
	int x;
	
	printf("a: %i, b: %d, c: %d", a, b, c);
	printf("\nLutfen bir sayi giriniz:");
	scanf("%d", &x);
	printf("Girilen sayi: %d", x);
	
	float pi = 3.14;
	printf("\n%8.4f", pi);
}

