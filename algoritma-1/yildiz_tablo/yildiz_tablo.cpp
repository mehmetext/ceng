#include <stdio.h>

int main() {
	
	int giris = 20;
	
	printf("Sayi gir: "); scanf("%d");
	
	printf("\n\n");
	
	for (int i = 1; i <= giris; i++) {
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	
	printf("\n\n");
	
	
	//1. 2 - 1
	//2. 1 - 2
	//3. 0 - 3
	
	for (int i = 1; i <= giris; i++) {
		for (int j = 0; j < giris - i; j++) printf(" ");
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	
	printf("\n\n");
	
	//giris: 3
	//1. 2 - 1 - 2
	//2. 1 - 3 - 1
	//3. 0 - 5 - 0
	
	for (int i = 1; i <= giris; i++) {
		for (int j = 0; j < giris - i; j++) printf(" ");
		for (int j = 0; j < i * 2 - 1; j++) printf("*");
		for (int j = 0; j < giris - i; j++) printf(" ");

		printf("\n");
	}
	
	//giris: 3
	//1. 0 - 5 - 0 -- 3*2 - 1 => 3*2 - 2*1 + 1 => 2*(3-1)+1
	//2. 1 - 3 - 1 -- 3*2 - 3 => 3*2 - 2*2 + 1 => 2*(3-2)+1
	//3. 2 - 1 - 2 -- 3*2 - 5 => 3*2 - 2*3 + 1 => 2*(3-3)+1
	
	for (int i = 1; i <= giris; i++) {
		if ( i == 1) continue;
		for (int j = 0; j < i-1; j++) printf(" ");
		for (int j = 0; j < 2 * (giris - i) + 1; j++) printf("*");
		for (int j = 0; j < i-1; j++) printf(" ");
		
		printf("\n");
	}
	
	printf("\n\n");
	
	
	//giris: 3
	//1. 2 - 0 - 2
	//2. 1 - 2 - 1
	//3. 0 - 4 - 0
	
	for (int i = 1; i <= giris; i++) {
		for (int j = 0; j < giris-i; j++) printf(" ");
		printf("/");
		for (int j = 0; j < (i-1)*2; j++) printf("*");
		printf("\\");
		for (int j = 0; j < giris-i; j++) printf(" ");
		
		printf("\n");
	}
	
	//giris: 3
	//1. 0 - 4 - 0 3*2 - 2*1 => 2 * (3-1)
	//2. 1 - 2 - 1 3*2 - 2*2 => 2 * (3-2)
	//3. 2 - 0 - 2 3*2 - 2*3 => 2 * (3-3)
	
	for (int i = 1; i <= giris; i++) {
		for (int j = 0; j < i-1; j++) printf(" ");
		printf("\\");
		for (int j = 0; j < 2 * (giris - i); j++) printf("*");
		printf("/");
		for (int j = 0; j < i-1; j++) printf(" ");
		
		printf("\n");
	}
	
	
	return 0;
}
