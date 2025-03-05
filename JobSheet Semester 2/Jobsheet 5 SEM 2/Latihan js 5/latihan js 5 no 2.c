#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Created By Rendi Aigo Brandon_23343082

// Definisi struktur untuk node dalam linked list ganda
struct doublelinkedlist {
    int data;
    struct doublelinkedlist *next, *prev;
} *head, *tail, *current;

// Fungsi untuk menyisipkan node di akhir linked list
void insertlast(int data) {
    // Membuat node baru
    current = (struct doublelinkedlist *)malloc(sizeof(struct doublelinkedlist));
    current->data = data;
    current->prev = current->next = NULL;
    
    // Memeriksa apakah linked list masih kosong
    if (head == NULL) {
        head = tail = current; // Jika ya, node baru adalah satu-satunya node dalam linked list
    } else {
        current->prev = tail;
        tail->next = current;
        tail = current; // Jika tidak, node baru ditambahkan di akhir dan tail diperbarui
    }
}

// Fungsi untuk menyisipkan node di awal linked list
void insertfirst(int data) {
    // Membuat node baru
    current = (struct doublelinkedlist *)malloc(sizeof(struct doublelinkedlist));
    current->data = data;
    current->next = current->prev = NULL;

    // Memeriksa apakah linked list masih kosong
    if (head == NULL) {
        head = tail = current; // Jika ya, node baru adalah satu-satunya node dalam linked list
    } else {
        head->prev = current;
        current->next = head;
        head = current; // Jika tidak, node baru ditambahkan di awal dan head diperbarui
    }
}

// Fungsi untuk menyisipkan node di tengah linked list
void insertmid(int data) {
    // Memeriksa kasus khusus ketika linked list kosong atau node baru harus ditempatkan di awal atau akhir
    if (head == NULL) {
        insertfirst(data);
    } else if (data < head->data) {
        insertfirst(data);
    } else if (data > tail->data) {
        insertlast(data);
    } else {
        // Membuat node baru
        current = (struct doublelinkedlist *)malloc(sizeof(struct doublelinkedlist));
        current->data = data;
        current->next = current->prev = NULL;

        // Mencari tempat yang tepat untuk menyisipkan node baru di tengah linked list
        struct doublelinkedlist *temp = head;
        while (temp != NULL && temp->data < current->data) {
            temp = temp->next;
        }

        // Menyisipkan node baru di antara dua node
        current->prev = temp->prev;
        current->next = temp;
        temp->prev->next = current;
        temp->prev = current;
    }
}

// Fungsi untuk menghapus node pertama dalam linked list
void deletefirst() {
    if (head == NULL) {
        printf("No Data\n");
    } else if (head == tail) {
        current = head;
        head = tail = NULL;
        free(current);
    } else {
        current = head;
        head = head->next;
        head->prev = NULL;
        free(current);
    }
}

// Fungsi untuk menghapus node terakhir dalam linked list
void deletelast() {
    if (head == NULL) {
        printf("No Data\n");
    } else if (head == tail) {
        current = tail;
        head = tail = NULL;
        free(current);
    } else {
        current = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(current);
    }
}

// Fungsi untuk menghapus node dengan nilai tertentu dalam linked list
void deletemid(int data) {
    int temu = 0;
    if (head == NULL) {
        printf("No Data\n");
    } else {
        current = head;
        while (current != NULL) {
            if (current->data == data) {
                temu = 1;
                break;
            }
            current = current->next;
        }
        if (temu == 1) {
            if (current == head) {
                deletefirst();
            } else if (current == tail) {
                deletelast();
            } else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
                free(current);
            }
        } else {
            printf("Data Not Found\n");
        }
    }
}

// Fungsi untuk menghapus semua node dalam linked list
void deleteall() {
    while (head != NULL) {
        deletefirst();
    }
}

// Fungsi untuk mencetak isi linked list
void print() {
    current = head;
    if (current != NULL) {
        while (current != NULL) {
            printf("Data %d\n", current->data);
            current = current->next;
        }
    } else {
        printf("No Data\n");
    }
}

int main() {
    // Contoh penggunaan fungsi-fungsi di atas
    insertfirst(2);
    insertfirst(3);
    insertfirst(4);
    insertfirst(5);
    insertlast(6);
    insertmid(7);
    deletemid(7);
    print();
    getchar();
    return 0;
}
