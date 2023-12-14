#include <stdio.h>

//create by 23343082_rendi aigo brandon  

void main(){
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);
        
		// increment counter
        counter++;
    }
  
    printf("\n\n----\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali. In", counter);
}