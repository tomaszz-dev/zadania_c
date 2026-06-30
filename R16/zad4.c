#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Order
{
    int id;
    float amount;
};

int getId(struct Order tab[], int rozmiar)
{
    int najwieksza=0;
    for(int i = 1; i<rozmiar; i++){
        if (tab[i].amount >= tab[najwieksza].amount){
            najwieksza = i;
        }
    }
    return tab[najwieksza].id;
};

int main()
{

    struct Order zamowienia[] = {
        {101,5800.0},
        {102,880.0},
        {103,80.0}
        };
        int rozmiar =3;

        int najwieksza = getId(zamowienia, rozmiar);
        printf("%d", najwieksza);

}

