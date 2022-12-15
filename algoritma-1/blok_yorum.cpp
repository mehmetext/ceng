#include <stdio.h>
#include <conio.h>

int main() {
	//a isminde bir deðiþken main fonksiyonu içinde tanýmlandý
	int a = 10;
	
	{
		int a = 5;
		printf("%d", a);
	}
	
	printf("\n%d", a);
	
	getch();
}
