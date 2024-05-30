#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Created by Rendi Aigo Brandon_23343082

#define MAX_LENGTH 100

// Struktur stack untuk menyimpan karakter
struct Stack {
    int top;
    char items[MAX_LENGTH];
};

// Fungsi untuk membuat stack baru
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    return stack;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(struct Stack* stack) {
    return stack->top == MAX_LENGTH - 1;
}

// Fungsi untuk menambahkan karakter ke dalam stack
void push(struct Stack* stack, char item) {
    if (isFull(stack)) {
        printf("Stack penuh. Tidak bisa menambahkan karakter.\n");
    } else {
        stack->items[++stack->top] = item;
    }
}

// Fungsi untuk menghapus karakter dari stack dan mengembalikan karakter yang dihapus
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack kosong. Tidak ada karakter untuk dihapus.\n");
        return '\0';
    } else {
        return stack->items[stack->top--];
    }
}

// Fungsi untuk membaca input kata dari pengguna
void inputKata(struct Stack* stack) {
    char kata[MAX_LENGTH];
    printf("Masukkan kata: ");
    scanf("%s", kata);
    int length = strlen(kata);
    for (int i = 0; i < length; i++) {
        push(stack, kata[i]);
    }
    printf("Kata berhasil dimasukkan ke dalam stack.\n");
}

// Fungsi untuk membalikkan kata yang tersimpan dalam stack
void balikKata(struct Stack* stack) {
    printf("Kata yang dibalik: ");
    while (!isEmpty(stack)) {
        printf("%c", pop(stack));
    }
    printf("\n");
}

int main() {
    struct Stack* stack = createStack();
    int choice;

    while (1) {
        printf("\n=== Menu Pembalik Kata ===\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputKata(stack);
                break;
            case 2:
                balikKata(stack);
                break;
            case 3:
                printf("Terima kasih! Program selesai.\n");
                exit(0);
            default:
                printf("Pilihan tidak valid. Silakan pilih menu yang sesuai.\n");
        }
    }

    return 0;
}
