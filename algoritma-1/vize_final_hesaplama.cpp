#include <stdio.h>

int main() {
	
	float vize, final;
	
	printf("Lutfen vize puaninizi giriniz: "); scanf("%f",&vize);
	printf("Lutfen final puaninizi giriniz: "); scanf("%f",&final);
	
	float ortalama = (vize * 0.4) + (final * 0.6);
	
	if (ortalama > 60) {
		printf("Gectiniz!");
	} else {
		float but;
		
		printf("Lutfen butunleme puaninizi giriniz: "); scanf("%f",&but);
		
		ortalama = (vize * 0.4) + (but * 0.6);
		
		if (ortalama > 60) {
			printf("Gectiniz!");
		} else {
			printf("Kaldiniz!");
		}
		
	}
	
	
	return 0;
}
