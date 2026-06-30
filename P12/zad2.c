#include <stdio.h>
#include <stdlib.h>

char* toUpperCase (char napis[]){
    int i =0;
    while (napis[i] != '\0' ) {
        if (napis[i] >= 'a' && napis[i] <= 'z') {
            napis[i] = napis[i] - 32;
        }
        i++;
    }
    return napis;
}

int main (){
    char napis[] = "abc";

    printf("%s", toUpperCase(napis));
}
