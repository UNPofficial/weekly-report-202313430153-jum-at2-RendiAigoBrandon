#include <stdio.h>
#define ukuran 6

//Created By Rendi Aigo Brandon_23343082

int queue[ukuran]; // Deklarasi array
int front = -1;
int rear = -1;

// Fungsi untuk menambahkan elemen pada circular queue
void enqueue(int element) {
    if (front == -1 && rear == -1) { // Kondisi untuk mengecek apakah queue kosong
        front = 0;
        rear = 0;
        queue[rear] = element;
    } else if ((rear + 1) % ukuran == front) { // Kondisi untuk mengecek apakah queue penuh
        printf("Antrian telah penuh..\n");
    } else {
        rear = (rear + 1) % ukuran; // Nilai pada rear bertambah
        queue[rear] = element; // Memberikan nilai pada posisi rear
    }
}

// Fungsi untuk menghapus elemen dari queue
void dequeue() {
    if (front == -1 && rear == -1) { // Kondisi untuk mengecek apakah queue kosong
        printf("\nQueue belum penuh..\n");
    } else if (front == rear) {
        printf("\nElemen yang di-dequeue adalah %d\n", queue[front]);
        front = -1;
        rear = -1;
    } else {
        printf("\nElemen yang di-dequeue adalah %d\n", queue[front]);
        front = (front + 1) % ukuran;
    }
}

// Fungsi untuk menampilkan elemen queue
void display() {
    int i = front;
    if (front == -1 && rear == -1) {
        printf("\nQueue kosong!..\n");
    } else {
        printf("\nElemen pada queue adalah : ");
        while (i != rear) {
            printf("%d, ", queue[i]);
            i = (i + 1) % ukuran;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    int menu = 1, x; // Deklarasi variabel

    while (menu < 4 && menu != 0) { // Looping menggunakan while
        printf("\n****************Circular Queue********************\n");

        printf("\n==================================================\n");
        printf("\n1: Tambah sebuah elemen");
        printf("\n2: Hapus sebuah elemen");
        printf("\n3: Tampilkan sebuah elemen");
        printf("\nMasukan pilihanmu! ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Silakan masukkan elemen yang ingin kamu tambahkan: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }
    return 0;
}
