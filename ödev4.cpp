#include <stdio.h>
#include <string.h>

int baslangiciIleEslesenKelimeleriBul(const char* kelimeler[], int boyut, const char* baslangic) {
    printf("Baslangici ile eslesen kelimeler: ");

    int bulunan = 0;

    for (int i = 0; i < boyut; i++) {
        if (strncmp(kelimeler[i], baslangic, strlen(baslangic)) == 0) {
            printf("%s ", kelimeler[i]);
            bulunan++;
        }
    }

    printf("\n");

    return bulunan;
}

int main() {
    const char* kelimeler[] = { "elma", "elbise", "armut", "araba", "ananas", "bal" };
    int boyut = sizeof(kelimeler) / sizeof(kelimeler[0]);

    const char* baslangic = "el";

    int bulunan = baslangiciIleEslesenKelimeleriBul(kelimeler, boyut, baslangic);
    printf("Toplam bulunan kelime sayisi: %d\n", bulunan);

    return 0;
}

