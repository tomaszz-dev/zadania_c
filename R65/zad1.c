#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int digitAt(unsigned int n, unsigned int k)
{

    int petla = 0;


    while(n != 0){
        if(petla == k){
            return n % 10;
        }
        printf("%d\n",n);
        n = n / 10;
        petla++;
    }
}




int main(void)
{
    int n = 234551;
    int k = 2;
    printf("wynik: %d",digitAt(n,k));
}
