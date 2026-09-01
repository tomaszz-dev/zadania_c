#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Hotel {
    char *name;
    int stars;
    float price;
};

char cheapestWithStars(struct Hotel tab[],int rozmiar, int minStars)
{


    int najtanszy = -1;
    int index = -1;
    for(int i=0;i<rozmiar;i++){
        printf("%d",tab[i].stars);
        if(tab[i].stars > minStars){
            if(tab[i].stars > najtanszy){
                najtanszy = tab[i].stars;
                index = i;
            }
        }
    }



    printf("%s", tab[index].name);
}

int main(void)
{
    int ilosc = 3;
    struct Hotel hot1 = {"zaslawek", 5, 420.21};
    struct Hotel hot2 = {"gdanszacz", 9, 311.21};
    struct Hotel hot3 = {"guwnolawie", 1, 1.21};

    struct Hotel hotele[] = {hot1,hot2,hot3};
    cheapestWithStars(hotele,ilosc,3);
}
