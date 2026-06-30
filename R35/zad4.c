#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Song
{
    char title[30];
    int plays;
};

char *topTitle(struct Song tab[],int rozmiar)
{
    int najw_indeks = 0;
    //printf("%s", tab[1].title);
    for(int i =0; i < rozmiar; i++){
        if (tab[i].plays > tab[najw_indeks].plays){
            najw_indeks = i;
        }
    }
    return tab[najw_indeks].title;
}

int main()
{
    struct Song p[] = {{"Echo",1200}, {"Nova", 3500},{"chuj",420420}};
    printf("%s",topTitle(p,3));
}
