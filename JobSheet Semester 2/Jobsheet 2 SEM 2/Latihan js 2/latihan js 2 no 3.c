#include <stdio.h>

// Created By Rendi Aigo brandon_23343082

int main() {
    int n;
    printf("Masukkan banyaknya bilangan : ");
    scanf("%d", &n);

    // Deklarasi array angka dengan ukuran n
    int angka[n];

    for (int i = 0; i < n; i++) {
        printf("Masukkan angka ke %d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Angka ke %d : %d\n", i + 1, angka[i]);
    }

    getchar(); // Memanggil getchar untuk membersihkan newline dari buffer
    return 0;
}
