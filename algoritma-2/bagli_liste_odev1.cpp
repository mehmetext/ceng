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

  return 0;
}