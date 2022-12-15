#include <stdio.h>

int kombinasyon(int, int);
int f(int);

int main()  {
	int n, r;
	
	printf("n,r seklinde kombinasyon giriniz: "); scanf("%d,%d", &n, &r);
	
	printf("Sonuc: %d \n", kombinasyon(n, r));
	
	return 0;
}

int kombinasyon(int n, int r) {
	return f(n) / (f(r) * f(n-r));
}

int f(int i) {
	return (i > 1) ? (f(i-1) * i) : 1;
}
