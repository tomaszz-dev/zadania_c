#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct elem{
    int i;
    struct elem * next; //nieskoczncozne
};

strus

int main(){
    struct elem * list = malloc(sizeof(struct elem));
    list->i = -1;
    list->next = malloc(sizeof(struct elem));
    list->next-> i = -2;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next-> i = 4;
    list->next->next->next = NULL;
    return 0;
}
