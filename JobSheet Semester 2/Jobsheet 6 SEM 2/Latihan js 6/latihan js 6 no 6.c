#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

int MAXSIZE = 8;
int stack[8];
int top = -1;

// Fungsi untuk memeriksa apakah stack kosong
int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

// Fungsi untuk memeriksa apakah stack penuh
int isfull() {
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}

// Fungsi untuk melihat elemen teratas dari stack
int peek() {
    return stack[top];
}

// Fungsi untuk mengambil elemen dari stack (pop)
int pop() {
    int data;
    if (!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Tidak dapat mengambil data, Stack kosong.\n");
        return -1;
    }
}

// Fungsi untuk menambahkan elemen ke dalam stack (push)
void push(int data) {
    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Tidak dapat menambahkan data. Stack penuh.\n");
    }
}

int main() {
    // Menambahkan item ke dalam stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(13);
    
    // Menampilkan elemen teratas pada stack
    printf("Elemen teratas pada Stack adalah: %d\n", peek());

    // Menampilkan semua elemen pada stack
    printf("Semua elemennya adalah:\n");
    while (!isempty()) {
        int data = pop();
        printf("%d\n", data);
    }

    printf("Stack full: %s\n", isfull() ? "Ya" : "Tidak");
    
    return 0;
}
