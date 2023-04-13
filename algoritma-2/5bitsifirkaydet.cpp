#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  FILE *fp;

  fp = fopen("sayilar.txt", "w");

  for (int i = 0; i < 100; i++)
  {
    fprintf(fp, "%d\n", rand() % 101);
  }

  fclose(fp);

  fp = fopen("sayilar.txt", "r");

  int *dizi = (int *)malloc(sizeof(int));
  int j = 0;

  while (!feof(fp))
  {
    int sayi;
    fscanf(fp, "%d", &sayi);

    if (!(sayi & (1 << 4)))
    {
      dizi[j] = sayi;
      j++;
    }
  }

  printf("Olusan liste: \n");

  for (int i = 0; i < j; i++)
  {
    printf("%d ", dizi[i]);
  }

  free(dizi);

  return 0;
}