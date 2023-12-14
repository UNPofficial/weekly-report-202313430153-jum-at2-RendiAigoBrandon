#include <stdio.h>

//create by 23343082_rendi aigo brandon

void main(){
    
	char title[] = "Belajar String.h pada Bahasa C";
    char title_copy[20];

    // copy string title ke title_copy
    strcpy(title_copy, title);
    
    //maka sekarang title_copy akan berisi:
    printf("isi title_copy\t: %s\n", title_copy);
    
}