#include <stdio.h>

void tekrarEdenElemanlariBul(int dizi[], int boyut) {
    printf("Tekrar eden elemanlar: ");

    for (int i = 0; i < boyut; i++) {
        for (int j = i + 1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                printf("%d ", dizi[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main() {
    int dizi[] = { 10, 5, 27, 15, 8, 10, 27, 5 };
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    tekrarEdenElemanlariBul(dizi, boyut);

    return 0;
}

