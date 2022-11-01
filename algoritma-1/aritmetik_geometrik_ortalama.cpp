#include <stdio.h>
#include <math.h>

int main() {
	
	int s1,s2,s3,s4;
	int tekSayac = 0, ciftSayac = 0;
	double tekToplam = 0, ciftCarpim = 1;
	
	printf("Lutfen bosluk birakarak 4 adet sayi giriniz: ");
	scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
	
	if (s1 % 2 == 0) {
		ciftSayac++;
		ciftCarpim *= s1;
	} else {
		tekSayac++;
		tekToplam += s1;
	}
	
	if (s2 % 2 == 0) {
		ciftSayac++;
		ciftCarpim *= s2;
	} else {
		tekSayac++;
		tekToplam += s2;
	}
	
	if (s3 % 2 == 0) {
		ciftSayac++;
		ciftCarpim *= s3;
	} else {
		tekSayac++;
		tekToplam += s3;
	}
	
	if (s4 % 2 == 0) {
		ciftSayac++;
		ciftCarpim *= s4;
	} else {
		tekSayac++;
		tekToplam += s4;
	}
	
	double aritmetikOrt = (tekSayac < 1) ? 0 : tekToplam / tekSayac;
	double geometrikOrt = (ciftSayac < 1) ? 0 : (pow(ciftCarpim, (1.0 / ciftSayac)));
		
	printf("\nGirilen tek sayilarin aritmetik ortalamasi: %f", aritmetikOrt);
	printf("\nGirilen cift sayilarin geometrik ortalamasi: %f", geometrikOrt);
	
	return 0;
}
