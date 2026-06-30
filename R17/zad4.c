#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Battery
{
    char name[20];
    int level;
};

struct Battery* newBattery(char* name, int level)
{
    struct Battery *b = malloc(sizeof(struct Battery));


    int i = 0;
    while (name[i] != '\0' && i <19){
        b->name[i] = name[i];
        i++;
    }
    b->name[i] = '\0';
    b->level = level;
    return b;

};



int main(){
    struct Battery *b = newBattery("BX", 80);
    printf("%d, %s", b->level, b->name );
}
