#include <stdio.h>
#include <conio.h>

int main() {
	//a isminde bir de�i�ken main fonksiyonu i�inde tan�mland�
	int a = 10;
	
	{
		int a = 5;
		printf("%d", a);
	}
	
	printf("\n%d", a);
	
	getch();
}
