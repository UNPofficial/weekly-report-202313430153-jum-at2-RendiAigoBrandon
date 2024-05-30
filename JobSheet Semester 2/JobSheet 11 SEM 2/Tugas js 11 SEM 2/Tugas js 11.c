#include <stdio.h>
#include <string.h>

// Struktur data untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    int nim;
    char nama[50];
    char ttl[50];
    float ipk;
};

// Fungsi untuk melakukan pencarian data dengan metode sequential search
int sequentialSearch(struct Mahasiswa data[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (data[i].nim == key) {
            return i; // Mengembalikan indeks jika data ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika data tidak ditemukan
}

// Fungsi untuk melakukan pencarian data dengan metode binary search
int binarySearch(struct Mahasiswa data[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (data[mid].nim == key) {
            return mid; // Mengembalikan indeks jika data ditemukan
        } else if (data[mid].nim < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Mengembalikan -1 jika data tidak ditemukan
}

int main() {
    int n;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    struct Mahasiswa data[n];

    // Memasukkan data mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Masukkan NIM mahasiswa ke-%d: ", i + 1);
        scanf("%d", &data[i].nim);
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]s", data[i].nama); // Memasukkan nama dengan spasi
        printf("Masukkan TTL mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]s", data[i].ttl); // Memasukkan TTL dengan spasi
        printf("Masukkan IPK mahasiswa ke-%d: ", i + 1);
        scanf("%f", &data[i].ipk);
    }

    // Cetak data mahasiswa yang telah dimasukkan
    printf("\nData mahasiswa yang telah dimasukkan:\n");
    printf("---------------------------------------------------\n");
    printf("NIM\tNama\t\tTTL\t\tIPK\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t%.2f\n", data[i].nim, data[i].nama, data[i].ttl, data[i].ipk);
    }
    printf("---------------------------------------------------\n");

    // Pencarian data mahasiswa
    int key;
    printf("\nMasukkan NIM yang ingin dicari: ");
    scanf("%d", &key);

    // Sequential Search
    int seqResult = sequentialSearch(data, n, key);
    if (seqResult != -1) {
        printf("Sequential Search: Data dengan NIM %d ditemukan pada indeks %d\n", key, seqResult);
    } else {
        printf("Sequential Search: Data dengan NIM %d tidak ditemukan\n", key);
    }

    // Binary Search (Data harus diurutkan terlebih dahulu)
    // Di sini kita akan mengurutkan berdasarkan NIM untuk keperluan binary search
    // Namun, untuk kasus yang lebih kompleks, bisa menggunakan algoritma pengurutan terlebih dahulu
    // seperti Quick Sort atau Merge Sort
    int i, j;
    struct Mahasiswa temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (data[j].nim > data[j+1].nim) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    // Binary Search
    int binaryResult = binarySearch(data, 0, n - 1, key);
    if (binaryResult != -1) {
        printf("Binary Search: Data dengan NIM %d ditemukan pada indeks %d\n", key, binaryResult);
    } else {
        printf("Binary Search: Data dengan NIM %d tidak ditemukan\n", key);
    }

    return 0;
}
