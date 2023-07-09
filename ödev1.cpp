#include <stdio.h>

int enBuyukSayiyiBul(int dizi[], int boyut) {
    int enBuyuk = dizi[0];

    for (int i = 1; i < boyut; i++) {
        if (dizi[i] > enBuyuk) {
            enBuyuk = dizi[i];
        }
    }

    return enBuyuk;
}

int main() {
    int dizi[] = { 8, 1, 654, 40, 35 };
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    int enBuyukSayi = enBuyukSayiyiBul(dizi, boyut);
    printf("En buyuk sayi: %d\n", enBuyukSayi);

    return 0;
}

