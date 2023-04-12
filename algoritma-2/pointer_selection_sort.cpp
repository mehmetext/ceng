#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int *dizi, int boyut) {
  int i, j, minIndex, temp;

  for (i = 0; i < boyut - 1; i++) {
    minIndex = i;

    for (j = i + 1; j < boyut; j++) {
      if (*(dizi + j) < *(dizi + minIndex)) {
        minIndex = j;
      }
    }

    temp = *(dizi + minIndex);
    *(dizi + minIndex) = *(dizi + i);
    *(dizi + i) = temp;
  }
}

int main() {
  srand(time(NULL));

  int dizi[20];

  for(int i = 0; i < 20; i++) {
    dizi[i] = rand() % 101;
    printf("%d ", dizi[i]);
  }

  selectionSort(&dizi[0], 20);

  printf("\n\nSiralama sonrasi dizinin elemanlari:\n");
  for(int i = 0; i < 20; i++) {
    printf("%d ", dizi[i]);
  }

  return 0;
}