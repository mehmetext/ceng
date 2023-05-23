#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int sayi;
  Node *sonraki;
} Node;

Node *push(Node *top, int sayi)
{

  Node *yeni = (Node *)malloc(sizeof(Node));
  yeni->sayi = sayi;
  yeni->sonraki = NULL;

  if (top == NULL)
  {
    top = yeni;
    return top;
  }
  else
  {
    yeni->sonraki = top;
    return yeni;
  }
}

Node *enqueue(Node *ilk, int sayi)
{
  Node *yeni = (Node *)malloc(sizeof(Node));
  yeni->sayi = sayi;
  yeni->sonraki = NULL;

  if (ilk == NULL)
  {
    ilk = yeni;
  }
  else
  {
    Node *gecici = ilk;
    while (gecici->sonraki != NULL)
    {
      gecici = gecici->sonraki;
    }
    gecici->sonraki = yeni;
  }

  return ilk;
}

void yazdir(Node *ilk)
{
  printf("\n");

  Node *gecici = ilk;

  if (ilk == NULL)
  {
    printf("Liste bos!\n\n");
    return;
  }

  printf("%d", gecici->sayi);
  gecici = gecici->sonraki;

  while (gecici != NULL)
  {
    printf(", %d", gecici->sayi);
    gecici = gecici->sonraki;
  }

  printf("\n\n");
}

Node *ekleSwitch(Node *ilk)
{
  printf("\n");
  printf("-> 1: Stack (Yigin)\n");
  printf("-> 2: Queue (Kuyruk)\n");
  printf("-> 3: Vazgec\n");
  printf("Seciniz: ");
  int tip, sayi;
  scanf("%d", &tip);
  printf("\n");

  if (tip == 3)
    return ilk;

  switch (tip)
  {
  case 1:
    printf("Stack -> Sayi giriniz: ");
    scanf("%d", &sayi);
    ilk = push(ilk, sayi);
    break;
  case 2:
    printf("Queue -> Sayi giriniz: ");
    scanf("%d", &sayi);
    ilk = enqueue(ilk, sayi);
    break;

  default:
    break;
  }
  printf("\n");

  return ilk;
}

Node *bulSilSwitch(Node *ilk)
{

  if (ilk == NULL)
  {
    printf("\nListe zaten bos!\n\n");
    return NULL;
  }

  int sayi;
  printf("Silinecek sayiyi giriniz: ");
  scanf("%d", &sayi);

  if (ilk->sonraki == NULL)
  {
    free(ilk);
    ilk = NULL;
  }
  printf("\n");

  return ilk;
}

int main()
{
  Node *ilk = NULL;

  while (true)
  {
    printf("**************************\n");
    printf("-> 1: Ekle\n");
    printf("-> 2: Bul ve Sil\n");
    printf("-> 3: Bul ve Goster\n");
    printf("-> 4: Tumunu Listele\n");
    printf("-> 5: Bitir\n");
    printf("Tip seciniz: ");

    int tip;
    scanf("%d", &tip);

    if (tip == 5)
      break;

    switch (tip)
    {
    case 1:
      ilk = ekleSwitch(ilk);
      break;
    case 2:
      ilk = bulSilSwitch(ilk);
      break;
    case 4:
      yazdir(ilk);

    default:
      break;
    }
  }

  return 0;
}