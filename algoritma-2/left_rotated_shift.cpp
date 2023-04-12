#include <stdio.h>

int lrs(unsigned int sayi, int kaydir);

int main() {

  unsigned int sayi; int kaydir;

  printf("Tamsayi giriniz: "); scanf("%d", &sayi);

  printf("Kac kere kaydirilacak: "); scanf("%d", &kaydir);

  printf("\n");

  int kaydirilmis = lrs(sayi, kaydir); //0010 0100 = 36

  printf("Kaydirilmis: %d", kaydirilmis);

  return 0;
}

int lrs(unsigned int sayi, int kaydir) {

  unsigned int solaKaydirilmis = sayi << kaydir;
  unsigned int sagaEklenen = sayi >> (32 - kaydir);

  return solaKaydirilmis | sagaEklenen;
}