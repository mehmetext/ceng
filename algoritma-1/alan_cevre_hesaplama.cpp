#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	
int main() {
	
		int kenar,alan,cevre;
	
	printf("kenar uzunlugunu giriniz:  ");
	scanf("%d ",&kenar);
	
	alan=kenar*kenar;
	cevre=kenar*4;
	
	
	printf("alan uzunlugu: %d",alan);
	printf("cevre uzunlugu: %d",cevre);
	

	return 0;

	
}
