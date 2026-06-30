#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countVowels(char napis[]){
    int samogloski = 0;
    int i = 0;
    while(napis[i] != '\0'){
        char c;
        c = napis[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='U'){
            samogloski+=1;
        }
        i++;
    }
    return samogloski;
}




int main() {
    printf("hejka2\n");

    char napis[] = "Ala mma kota";

    printf("ilosc to %d", countVowels(napis));



    return 0;
}
