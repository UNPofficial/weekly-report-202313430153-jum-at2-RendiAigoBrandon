#include <stdio.h>
#include <conio.h>

// Created By Rendi Aigo brandon_23343082

typedef int angka;
typedef char huruf;

int main() {
    angka umur;
    huruf h;
    huruf nama[10];

    printf("Masukkan umur anda : ");
    scanf("%d", &umur);
    printf("Umur anda adalah %d\n", umur); //Menambahkan \n pada akhir printf untuk memberikan baris baru setelah mencetak umur dan huruf.

    printf("Masukkan huruf : ");
    h = getche();
    printf("\nHuruf anda %c\n", h);

    printf("Masukkan nama : ");
    scanf("%s", nama);
    printf("Nama anda %s\n", nama); //Menambahkan \n pada akhir printf setelah mencetak huruf untuk memberikan baris baru sebelum meminta masukan nama.

    getch();
    return 0; //Menambahkan return 0; pada akhir main() untuk menunjukkan bahwa program telah berakhir dengan sukses.
}
