#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool asal(int sayi);

int main() {
  srand(time(NULL));

  FILE* sayilar;
  FILE* sayilar2;

  sayilar = fopen("sayilar.txt", "w");

  if (ferror(sayilar)) {
    printf("sayilar.txt acilirken hata");
    return 0;
  }

  for (int i = 0; i < 100; i++) {
    int sayi = rand() % 1000;
    fprintf(sayilar, "%d \n", sayi);
  }

  fclose(sayilar);

  sayilar = fopen("sayilar.txt", "r");

  if (ferror(sayilar)) {
    printf("sayilar.txt acilirken hata (2)");
    return 0;
  }

  sayilar2 = fopen("sayilar2.txt", "w");

  if (ferror(sayilar2)) {
    printf("sayilar2.txt acilirken hata");
    return 0;
  }

  while (!feof(sayilar)) {
    int sayi;
    fscanf(sayilar, "%d", &sayi);

    bool kontrol = asal(sayi);

    if (kontrol) {
      fprintf(sayilar2, "%d \n", sayi);
    } 
  }

  return 0;
}

bool asal(int sayi) {
  if (sayi < 2) return false;

  for (int i = 2; i <= (sayi / 2); i++) {
    if (sayi % i == 0) return false;
  }

  return true;
}