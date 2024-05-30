#include <stdio.h>

// Created By Rendi Aigo brandon_23343082

typedef struct {
    int HH, MM, SS;
} jam;

void tampil(jam j) {
    printf("JAM %02d:%02d:%02d\n", j.HH, j.MM, j.SS); //format %02d digunakan untuk memastikan bahwa dua digit ditempatkan untuk menyatakan jam, menit, dan detik. 
}

int valid(jam j) {
    return j.HH >= 0 && j.HH <= 23
           && j.MM >= 0 && j.MM <= 59
           && j.SS >= 0 && j.SS <= 59;
}

jam input() {
    jam j;
    do {
        printf("Masukkan Jam (0-23): ");
        scanf("%d", &j.HH);
        printf("Masukkan Menit (0-59): ");
        scanf("%d", &j.MM);
        printf("Masukkan Detik (0-59): ");
        scanf("%d", &j.SS);
    } while (!valid(j));
    return j;
}

int main() {
    jam j;
    j = input();
    tampil(j);
    return 0;
}
