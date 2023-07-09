#include <stdio.h>
#include <stdlib.h>

struct Dugum {
    int veri;
    struct Dugum* sonraki;
};

int bagliListeBoyutunuBul(struct Dugum* bas) {
    int sayac = 0;
    struct Dugum* suanki = bas;

    while (suanki != NULL) {
        sayac++;
        suanki = suanki->sonraki;
    }

    return sayac;
}

void dugumEkle(struct Dugum** bas, int veri) {
    struct Dugum* yeniDugum = (struct Dugum*)malloc(sizeof(struct Dugum));
    yeniDugum->veri = veri;
    yeniDugum->sonraki = NULL;

    if (*bas == NULL) {
        *bas = yeniDugum;
    } else {
        struct Dugum* suanki = *bas;
        while (suanki->sonraki != NULL) {
            suanki = suanki->sonraki;
        }
        suanki->sonraki = yeniDugum;
    }
}

void bagliListeyiYazdir(struct Dugum* bas) {
    struct Dugum* suanki = bas;

    while (suanki != NULL) {
        printf("%d ", suanki->veri);
        suanki = suanki->sonraki;
    }
    printf("\n");
}

int main() {
    struct Dugum* bas = NULL;

    dugumEkle(&bas, 10);
    dugumEkle(&bas, 20);
    dugumEkle(&bas, 30);
    dugumEkle(&bas, 40);

    printf("Bagli liste: ");
    bagliListeyiYazdir(bas);

    int boyut = bagliListeBoyutunuBul(bas);
    printf("Eleman sayisi: %d\n", boyut);

    return 0;
}

