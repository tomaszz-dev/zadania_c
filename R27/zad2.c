#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countUpper(char tablica[]) {
    //printf("%c", tablica[0]);
    int iloscduzych = 0;
    int n = 0;
    while (tablica[n] != '\0'){
        //printf("%c",tablica[n]);
        if (tablica[n] >= 'A' && tablica[n] <= 'Z'){
            iloscduzych+=1;
        }
        n++;
    }
    //printf("%d", iloscduzych);
    return iloscduzych;

}




int main(){
    char tablica[] = "SpierDalaj Cwelu ZajeBany Kurwa";
    //printf("%c", tablica[0]);
    printf("%d",countUpper(tablica));

}
