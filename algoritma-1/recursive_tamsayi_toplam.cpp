#include <stdio.h>

int recTamsayiToplam(int a);

int main() {
  int a;

  printf("Sayi gir: "); scanf("%d", &a);

  printf("%d sayisina kadar olan tamsayilarin toplami: %d", a, recTamsayiToplam(a));

  return 0;
}

int recTamsayiToplam(int a) {

  if (a == 0) return 0;

  return a + recTamsayiToplam(a - 1);
}