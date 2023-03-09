//N elemanlı bir dizideki tek elemanları dizinin başına çift elemanları dizinin sonuna taşıyan c programı.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int sayiAdet = 10;
  int sayilar[10] = {1,2,3,4,5,6,7,8,9,10};

  srand(time(NULL));
  for (int i = 0; i < sayiAdet; i++) sayilar[i] = rand() % 100 + 1;

  printf("Onceki liste: %d", sayilar[0]); 
  for (int i = 1; i < sayiAdet; i++) {
    printf(", %d", sayilar[i]);
  }

  for (int i = 0; i < sayiAdet; i++) {
    
  }

  printf("\nSonraki liste: %d", sayilar[0]); 
  for (int i = 1; i < sayiAdet; i++) {
    printf(", %d", sayilar[i]);
  }

  printf("\n");

  return 0;
}

/* for (int i = 0; i < sayiAdet; i++) {
    if (sayilar[i] % 2 == 0) continue;

    for (int j = 0; j < sayiAdet; j++) {
      if (sayilar[j] % 2 == 0) {
        int temp = sayilar[j];
        sayilar[j] = sayilar[i];
        sayilar[i] = temp;

        continue;
      }
    }
  } */