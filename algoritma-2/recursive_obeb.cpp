#include <stdio.h>

int recObeb(int a, int b, int i);

int main() {
  int a, b;

  printf("1. sayiyi gir: "); scanf("%d", &a);
  printf("2. sayiyi gir: "); scanf("%d", &b);

  int buyukSayi = a > b ? a : b;

  printf("%d ve %d sayilarinin obeb'i: %d", a, b, recObeb(a, b, buyukSayi));

  return 0;
}

int recObeb(int a, int b, int i) {

  if (a % i == 0 && b % i == 0) return i;

  return recObeb(a, b, i - 1);
}