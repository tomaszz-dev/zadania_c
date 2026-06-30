#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Tank
{
    char label[20];
    float liters;
};

struct Tank* newTank (char label[20], float liters)
{
    if (liters < 0){
        return NULL;
    }

    struct Tank* tank = malloc(sizeof(struct Tank));

    int i = 0;
    while (i < (sizeof(tank->label) - 1)
           && label[i] != '\0'){
        tank->label[i] = label[i];
        i++;
    }
    tank->label[i] = '\0';
    tank->liters = liters;

    return tank;
}

int main()
{

    struct Tank *t1 = newTank("Zbiornik_A", 15690.5);
    printf("Etykieta: %s, Litry: %.2f\n", t1->label, t1->liters);


}
