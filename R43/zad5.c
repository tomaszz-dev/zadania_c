#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct elem{
    int x;
    struct elem * next;
};


void negateALL(struct elem *lista)
{
    struct elem *glowa = lista;
    while(lista != NULL){
        printf("%d", lista->x);
        lista->x = lista->x * (-1);

        lista = lista->next;
    }
    lista = glowa;
    while(lista != NULL){
        printf("%d", lista->x);


        lista = lista->next;
    }


}



int main(void)
{
    struct elem *lista = malloc(sizeof(struct elem));
    lista->x = 3;

    lista->next = malloc(sizeof(struct elem));
    lista->next->x = -1;

    lista->next->next =malloc(sizeof(struct elem));
    lista->next->next->x = -4;

    negateALL(lista);
}
