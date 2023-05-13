#include <stdio.h>
#include <stdlib.h>

struct OGRENCI
{
  int id;
  float vize;
  float final;
  float ortalama;
  struct OGRENCI *sonraki;
};

void ekle(struct OGRENCI **bas, int id, float vize, float final)
{
  struct OGRENCI *yeniOgrenci = (struct OGRENCI *)malloc(sizeof(struct OGRENCI));
  yeniOgrenci->id = id;
  yeniOgrenci->vize = vize;
  yeniOgrenci->final = final;
  yeniOgrenci->ortalama = (vize + final) / 2;
  yeniOgrenci->sonraki = NULL;

  if (*bas == NULL)
  {
    *bas = yeniOgrenci;
    return;
  }

  struct OGRENCI *temp = *bas;
  while (temp->sonraki != NULL)
  {
    temp = temp->sonraki;
  }

  temp->sonraki = yeniOgrenci;
}

void hesaplaOrtalama(struct OGRENCI *bas)
{
  struct OGRENCI *temp = bas;
  while (temp != NULL)
  {
    temp->ortalama = (temp->vize + temp->final) / 2;
    temp = temp->sonraki;
  }
}

void listeyiYazdir(struct OGRENCI *bas)
{
  struct OGRENCI *temp = bas;
  while (temp != NULL)
  {
    printf("Ogrenci ID: %d, Vize Notu: %.2f, Final Notu: %.2f, Ortalama: %.2f\n",
           temp->id, temp->vize, temp->final, temp->ortalama);
    temp = temp->sonraki;
  }
}

int main()
{
  struct OGRENCI *bas = NULL;
  int id;
  float vize, final;

  printf("Ogrenci bilgilerini girin (Cikmak icin ID'yi -1 yapabilirsiniz):\n");

  while (1)
  {
    printf("Ogrenci ID: ");
    scanf("%d", &id);

    if (id == -1)
    {
      break;
    }

    printf("Vize Notu: ");
    scanf("%f", &vize);

    printf("Final Notu: ");
    scanf("%f", &final);

    ekle(&bas, id, vize, final);
  }

  hesaplaOrtalama(bas);

  printf("\nOgrenci Notlari:\n");
  listeyiYazdir(bas);

  return 0;
}
