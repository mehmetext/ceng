#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ip = (int *)malloc(sizeof(int));
  int sayi, count = 0;

  while (sayi > -1)
  {
    if (sayi < 0)
    {
      continue;
    }

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 3 == 0 || sayi % 5 == 0)
    {
      *(ip + count) = sayi;
      count++;
    }
  }

  printf("Olusan liste:\n");
  for (int i = 0; i < count; i++)
  {
    printf("%d ", *(ip + i));
  }

  return 0;
}