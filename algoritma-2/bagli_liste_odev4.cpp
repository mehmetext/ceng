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
  Node *gecici = ilk;

  if (ilk == NULL)
  {
    printf("Liste bos!\n");
    return;
  }

  printf("%d", gecici->sayi);
  gecici = gecici->sonraki;

  while (gecici != NULL)
  {
    printf(", %d", gecici->sayi);
    gecici = gecici->sonraki;
  }

  printf("\n");
}

int main()
{
  Node *ilk = NULL;

  while (true)
  {
    printf("Tip seciniz (Stack = 1, Queue = 2, Son = 3): ");
    int tip, sayi;
    scanf("%d", &tip);

    if (tip == 3)
      break;

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
      printf("Herhangi bir secim yapmadiniz!\n");
      break;
    }

    printf("Listenin guncel hali:\n");
    yazdir(ilk);
    printf("\n");
  }

  return 0;
}