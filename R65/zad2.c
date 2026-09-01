#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int seqH(unsigned int n)
{
    if(n == 0){
        return 2;
    }
    if(n >= 1){
        return 3 * seqH(n-1) - n;
    }

}




int main(void)
{
    int n = 2;

    printf("wynik: %d",seqH(n));
}
