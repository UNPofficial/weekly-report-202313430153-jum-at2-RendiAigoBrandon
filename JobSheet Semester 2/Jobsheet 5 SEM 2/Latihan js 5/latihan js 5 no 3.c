#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

//Created By Rendi Aigo Brandon_23343082

// Membuat struktur untuk node dalam linked list
struct node {
    int data;
    struct node *next;
};

// Inisialisasi pointer awal linked list
struct node *start = NULL;

// Fungsi untuk membuat linked list baru
struct node *create_linked_list(struct node *);

// Fungsi untuk menampilkan semua node dalam linked list
struct node *display(struct node *);

// Fungsi-fungsi untuk operasi-operasi pada linked list
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

// Fungsi utama
int main(int argc, char *argv[]) {
    int option;
    do {
        // Menampilkan menu
        printf("\n\n ======= SINGLE LINKED LIST =======\n");
        printf("\n 1: Buat Single Linked List");
        printf("\n 2: Tampilkan semua node Single Linked List");
        printf("\n 3: Tambah node di awal Single Linked List");
        printf("\n 4: Tambah node di akhir Single Linked List");
        printf("\n 5: Tambah node sebelum node yang diberikan");
        printf("\n 6: Tambah node setelah node yang diberikan");
        printf("\n 7: Hapus node di awal Single Linked List");
        printf("\n 8: Hapus node di akhir Single Linked List");
        printf("\n 9: Hapus sebuah node tertentu");
        printf("\n 10: Hapus node setelah node yang diberikan");
        printf("\n 11: Hapus semua node Single Linked List");
        printf("\n 12: Urutkan data Single Linked List");
        printf("\n 13: Keluar dari Program");
        printf("\n\n Masukan pilihan menu : ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                system("cls");
                start = create_linked_list(start);
                printf("\n LINKED LIST CREATED");
                break;

            case 2:
                system("cls");
                start = display(start);
                break;

            case 3:
                system("cls");
                start = insert_beg(start);
                break;

            case 4:
                system("cls");
                start = insert_end(start);
                break;

            case 5:
                system("cls");
                start = insert_before(start);
                break;
            case 6:
                system("cls");
                start = insert_after(start);
                break;
            case 7:
                system("cls");
                start = delete_beg(start);
                break;
            case 8:
                system("cls");
                start = delete_end(start);
                break;
            case 9:
                system("cls");
                start = delete_node(start);
                break;
            case 10:
                system("cls");
                start = delete_after(start);
                break;
            case 11:
                start = delete_list(start);
                printf("\n LINKED LIST DELETED");
                break;
            case 12:
                start = sort_list(start);
                break;
        }
    } while(option != 13);
    getch();
    return 0;
}

// Fungsi untuk membuat linked list baru
struct node *create_linked_list(struct node *start) {
    system("cls");
    struct node *new_node, *ptr;
    int num;
    printf("\n Tekan 0 untuk berhenti input data");
    printf("\n Masukan data : ");
    scanf("%d", &num);
    while(num != 0) {
        // Membuat node baru
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        if(start == NULL) {
            new_node->next = NULL;
            start = new_node;
        } else {
            ptr = start;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf(" Masukan data berikutnya : ");
        scanf("%d", &num);
    }
    return start;
}

// Fungsi untuk menampilkan semua node dalam linked list
struct node *display(struct node *start) {
    struct node *ptr;
    ptr = start;
    printf(" DATA SINGLE LINKED LIST \n\n");
    while(ptr != NULL) {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

// Fungsi untuk menambahkan node di awal linked list
struct node *insert_beg(struct node *start) {
    struct node *new_node;
    int num;
    printf(" TAMBAH DATA DI AWAL \n\n");
    printf("\n Masukan data : ");
    scanf("%d", &num);
    // Membuat node baru
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    printf("\n DATA BERHASIL DITAMBAHKAN! \n");
    return start;
}

// Fungsi untuk menambahkan node di akhir linked list
struct node *insert_end(struct node *start) {
    struct node *ptr, *new_node;
    int num;
    printf(" TAMBAH DATA DI AKHIR \n\n");
    printf("\n Masukan data : ");
    scanf("%d", &num);
    // Membuat node baru
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = NULL;
    printf("\n DATA BERHASIL DITAMBAHKAN! \n");
    return start;
}

// Fungsi untuk menambahkan node sebelum node yang diberikan
struct node *insert_before(struct node *start) {
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf(" TAMBAH DATA SEBELUM NODE TERTENTU \n\n");
    printf("\n Masukan data : ");
    scanf("%d", &num);
    printf("\n Data baru ditambahkan sebelum node dengan data : ");
    scanf("%d", &val);
    // Membuat node baru
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    // Mencari node sebelum node yang diberikan
    while(ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    printf("\n DATA BERHASIL DITAMBAHKAN! \n");
    return start;
}

// Fungsi untuk menambahkan node setelah node yang diberikan
struct node *insert_after(struct node *start) {
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf(" TAMBAH DATA SETELAH NODE TERTENTU \n\n");
    printf("\n Masukan data : ");
    scanf("%d", &num);
    printf("\n Data baru ditambahkan setelah node dengan data : ");
    scanf("%d", &val);
    // Membuat node baru
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    preptr = ptr;
    // Mencari node yang diberikan
    while(preptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    printf("\n DATA BERHASIL DITAMBAHKAN! \n");
    return start;
}

// Fungsi untuk menghapus node di awal linked list
struct node *delete_beg(struct node *start) {
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    printf("\n DATA AWAL BERHASIL DIHAPUS! \n");
    return start;
}

// Fungsi untuk menghapus node di akhir linked list
struct node *delete_end(struct node *start) {
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr->next != NULL) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    printf("\n DATA AKHIR BERHASIL DIHAPUS! \n");
    return start;
}

// Fungsi untuk menghapus sebuah node tertentu
struct node *delete_node(struct node *start) {
    struct node *ptr, *preptr;
    int val;
    printf("\n HAPUS DATA TERTENTU SINGLE LINKED LIST \n");
    printf("\n Masukan data node yang ingin dihapus : ");
    scanf("%d", &val);
    ptr = start;
    // Jika node yang akan dihapus adalah node pertama
    if(ptr->data == val) {
        start = delete_beg(start);
        return start;
    } else {
        // Mencari node yang akan dihapus
        while(ptr->data != val) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\n DATA BERHASIL DIHAPUS! \n");
        return start;
    }
}

// Fungsi untuk menghapus node setelah node yang diberikan
struct node *delete_after(struct node *start) {
    struct node *ptr, *preptr;
    int val;
    printf("\n HAPUS DATA SETELAH NODE TERTENTU SINGLE LINKED LIST \n");
    printf("\n Masukan data setelah node yang akan dihapus : ");
    scanf("%d", &val);
    ptr = start;
    // Mencari node yang diberikan
    while(ptr->data != val)
        ptr = ptr->next;
    preptr = ptr->next;
    ptr->next = preptr->next;
    free(preptr);
    printf("\n DATA BERHASIL DIHAPUS! \n");
    return start;
}

// Fungsi untuk menghapus semua node dalam linked list
struct node *delete_list(struct node *start) {
    struct node *ptr;
    // Menghapus setiap node sampai tidak ada node tersisa
    if(start != NULL) {
        ptr = start;
        while(ptr != NULL) {
            printf("\n %d is to be deleted next", ptr->data);
            start = delete_beg(ptr);
            ptr = start;
        }
    }
    return start;
}

// Fungsi untuk mengurutkan data dalam linked list
struct node *sort_list(struct node *start) {
    printf("\n DATA SINGLE LINKED LIST SUDAH TERURUT DARI KECIL KE BESAR!\n");
           struct node *ptr1, *ptr2;
           int temp;
           ptr1 = start;
    while(ptr1->next != NULL) {
        ptr2 = ptr1->next;
        while(ptr2 != NULL) {
            if(ptr1->data > ptr2->data) {
                // Tukar nilai jika diperlukan
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}


