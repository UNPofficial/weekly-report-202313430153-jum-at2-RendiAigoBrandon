#include<stdio.h>

// Created By Rendi Aigo Brandon_23343082

void ShellSort(int a[], int n) {
    int i, j, increment, tmp;
    // Corrected comment syntax
    for (increment = n/2; increment > 0; increment /= 2) {
        for(i = increment; i < n; i++) {
            tmp = a[i];
            for(j = i; j >= increment; j -= increment) {
                if(tmp < a[j-increment]) // corrected if condition
                    a[j] = a[j-increment]; // corrected assignment operator
                else
                    break;
            }
            a[j] = tmp;
        }
    }
}

int main() {
    int i, n, a[10];
    printf("Masukkan jumlah elemen : ");
    scanf("%d",&n);
    printf("Masukkan %d bilangan : \n",n);
    for(i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    ShellSort(a,n);
    printf("Elemen yang telah diurutkan adalah:\n");
    for(i = 0; i < n; i++)
        printf("%d\n",a[i]);
    printf("\n");
    return 0;
}
