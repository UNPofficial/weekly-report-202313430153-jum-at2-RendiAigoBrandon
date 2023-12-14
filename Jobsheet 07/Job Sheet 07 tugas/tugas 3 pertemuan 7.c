#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    // Menetapkan username dan password yang diharapkan
    char expectedUsername[] = "user";
    char expectedPassword[] = "apaya";

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", username);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa kecocokan username dan password
    if (strcmp(username, expectedUsername) == 0 && strcmp(password, expectedPassword) == 0) {
        printf("Berhasil Login\n");
    } else {
        printf("Password Salah\n");
    }

    return 0;
}
