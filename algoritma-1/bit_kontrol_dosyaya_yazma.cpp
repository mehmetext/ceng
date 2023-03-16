#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));

  FILE* sayilar0;
  FILE* sayilar1;

  sayilar0 = fopen("sayilar0.txt", "w");
  sayilar1 = fopen("sayilar1.txt", "w");

  if (ferror(sayilar0) || ferror(sayilar1)) {
    printf("dosyalar olusturulurken hata!");
    return 0;
  }


  for (int i = 0; i < 100; i++) {
    unsigned int random = rand() % 101;
    
    //0000 0001
    //0001 0000
    if (random & (1 << 5)) {
      //bit 1
      random &= ~(1 << 3);
      fprintf(sayilar1, "%d \n", random);
    } else {
      //bit 0
      random |= (1 << 4);
      fprintf(sayilar0, "%d \n", random);
    }
  }

  return 0;
}