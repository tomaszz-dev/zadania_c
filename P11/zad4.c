#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct City {
    char name[100];
    int population;

};

char* getName(struct City tablica[], int size){
    int max = 0;

    for (int i=1;i<size;i++){
        if (tablica[i].population > tablica[max].population) {
            max=i;
        }
    }
    return tablica[max].name;
}

int main(){
    struct City tablica_miast[3] = {
        {"Lublin", 696969},
        {"Krakow", 420420},
        {"Marzecice", 9999999}
    };

    printf("Najwieksze miasto to: %s\n", getName(tablica_miast, 3));


}
