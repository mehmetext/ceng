#include <stdio.h>

struct isci {
    char adi[30];
    char soyadi[30];
    int yas;
    double aylikUcret;
};

struct isci bilgiAl(struct isci isci) {
    printf("Ad giriniz: "); gets(isci.adi);
    printf("Soyad giriniz: "); gets(isci.soyadi);
    printf("Yas giriniz: "); scanf("%d", &isci.yas);
    printf("Aylik ucret giriniz: "); scanf("%lf", &isci.aylikUcret);

    return isci;
}

int main() {
    struct isci isci;

    struct isci newIsci = bilgiAl(isci);

    printf("Girilen ad: %s \n", newIsci.adi);
    printf("Girilen soyad: %s \n", newIsci.soyadi);
    printf("Girilen yas: %d \n", newIsci.yas);
    printf("Girilen aylik ucret: %f \n", newIsci.aylikUcret);
    
    return 0;
}
