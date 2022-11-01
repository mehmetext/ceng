#include <stdio.h>

void ardisikToplam(int n) {
	int toplam = (n * (n+1)) / 2;
	
	printf("%d sayisina kadar olan sayilarin ardisik toplami: %d", n, toplam);
}

void ardisikCiftToplam(int n) {
	bool tekMi = false;
	
	if (n % 2 != 0) {
		n--;
		tekMi = true;
	}
	
	int toplam = ((n/2) * ((n/2)+1));
	
	n += tekMi ? 1 : 0;
	
	printf("%d sayisina kadar olan cift sayilarin toplami: %d", n, toplam);
}

void ardisikTekToplam(int n) {
	bool tekMi = true;
	
	if (n % 2 == 0) {
		n--;
		tekMi = false;
	}
	
	int toplam = (((n + 1) / 2) * ((n + 1) / 2));
	
	n+= !tekMi ? 1 : 0;
	
	printf("%d sayisina kadar olan tek sayilarin toplami: %d", n, toplam);
}

int main() {
	
	ardisikToplam(5);
	printf("\n");
	ardisikCiftToplam(5);
	printf("\n");
	ardisikTekToplam(5);
	
	return 0;
}


