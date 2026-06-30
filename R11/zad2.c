#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countConsonants(char tab[]) {
    int ilosc = 0;
    int i = 0;

    while(tab[i] != '\0'){
        printf("%c", tab[i]);
        if (tab[i] == 'a' || tab[i] == 'e' || tab[i] == 'i' || tab[i] == 'o' || tab[i] == 'u'){
            ilosc = ilosc + 1;
        }
        i++;
    }
    return (i - ilosc);
}




int main(){
    char tab[] = "xyz";
    printf("%d",countConsonants(tab));


}
