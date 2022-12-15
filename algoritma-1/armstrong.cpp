#include <stdio.h>
#include <math.h>

int main() {
	int sinir = 2000;
	
	printf("1'den %d sayisina kadar olan Armstrong sayilari asagidadir: \n", sinir);
	
	for (int i = 1; i <= sinir; i++) {
		int temp = i, basamak = 0, toplam = 0;
		
		while (temp > 0) {
			temp /= 10;
			basamak++;
		}
		
		for (int j = 1; j <= basamak; j++) {
			int sayi = (i % (int)pow(10, j) / (int)(pow(10, j-1)));
			
			//printf("%d sayisinin %d. basamagi = %d \n", i, j, sayi);
			
			toplam += pow(sayi, basamak);
		}
		
		if (i == toplam) printf("%d\n", i);
	}
}
