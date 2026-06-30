#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Car
{
    char model[60];
    int year;
    int mileage;
};

char *getModel(struct Car tablica[],int rozmiar)
{
    int min_indeks = 0;
    for (int i = 1; i<rozmiar; i++){
        if(tablica[i].mileage < tablica[min_indeks].mileage){
            min_indeks = i;
        }
    }
    return tablica[min_indeks].model;
}



int main(){
    struct Car salon[] = {
        {"Opel Astra", 2014, 80000},
        {"Audi A4",     2018, 45000},  // To auto ma najmniejszy przebieg
        {"Fiat Tipo",   2019, 45000}};
        int rozmiar = 3;
    char *najmniejszyp = getModel(salon, rozmiar);
    printf("%s", najmniejszyp);
}
