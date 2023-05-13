#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void ekle(struct Node **bas, int veri)
{
  struct Node *yeniNode = (struct Node *)malloc(sizeof(struct Node));
  yeniNode->data = veri;
  yeniNode->next = NULL;

  if (*bas == NULL)
  {
    *bas = yeniNode;
    return;
  }

  struct Node *temp = *bas;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = yeniNode;
}

void sil(struct Node **bas, int veri)
{
  struct Node *temp = *bas;
  struct Node *onceki = NULL;

  if (temp != NULL && temp->data == veri)
  {
    *bas = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->data != veri)
  {
    onceki = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
    printf("Sayi bulunamadi.\n");
    return;
  }

  onceki->next = temp->next;
  free(temp);
}

void listeyiYazdir(struct Node *bas)
{
  struct Node *temp = bas;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  struct Node *bas = NULL;
  int sayi;

  printf("Tam sayilari girin (Cikmak icin -1): \n");

  while (1)
  {
    printf("Sayi: ");
    scanf("%d", &sayi);

    if (sayi == -1)
    {
      break;
    }

    ekle(&bas, sayi);
  }

  printf("Girilen tam sayilar:\n");
  listeyiYazdir(bas);

  printf("Silinecek sayiyi girin: ");
  scanf("%d", &sayi);

  sil(&bas, sayi);

  printf("Guncellenmis tam sayilar:\n");
  listeyiYazdir(bas);

  return 0;
}