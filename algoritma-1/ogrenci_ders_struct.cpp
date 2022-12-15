#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct ders {
  int ders_kod;
  int vize;
  int final;
  double gecmeNotu;
};

struct sahis_bilgileri {
  char ad[40];
  char soyad[40];
  int no;
  struct ders dersler[5];
};

int main() {

  srand(time(NULL));
  
  int ogrenciSayi = 2;
  int dersSayisi = 5;

  sahis_bilgileri sahislar[ogrenciSayi];

  for (int i = 0; i < ogrenciSayi; i++) {
    int sira = i+1;
    printf("%d. ogrencinin adini gir: ", sira); scanf("%s", sahislar[i].ad);
    printf("%d. ogrencinin soyadini gir: ", sira); scanf("%s", sahislar[i].soyad);
    printf("%d. ogrencinin numarasini gir: ", sira); scanf("%d", &sahislar[i].no);

    for (int j = 0; j < dersSayisi; j++) {
      sahislar[i].dersler[j].ders_kod = j+1;
      sahislar[i].dersler[j].vize = rand() % 100 + 1;
      sahislar[i].dersler[j].final = rand() % 100 + 1;
      sahislar[i].dersler[j].gecmeNotu = (sahislar[i].dersler[j].vize * 0.4) + (sahislar[i].dersler[j].final * 0.6);
    }

  }

  for (int i = 0; i < ogrenciSayi; i++)
  {
    printf("---------------------------\n");

    printf("%s %s (%d) adli ogrencinin notlari: \n", sahislar[i].ad, sahislar[i].soyad, sahislar[i].no);
    
    for (int j = 0; j < dersSayisi; j++) {
      struct ders ders = sahislar[i].dersler[j];

      printf("Ders kodu: %d => Vize: %d - Final %d - Not: %f \n", ders.ders_kod, ders.vize, ders.final, ders.gecmeNotu);
    }

  }
  


  return 0;
}