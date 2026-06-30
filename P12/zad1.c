#include <stdio.h>
#include <stdlib.h>

int sumOddDigits (unsigned int n){
    int suma = 0;
    while(n > 0){
        int ostatnia = n % 10;
        if (ostatnia % 2 != 0){
            //printf("%d", n%10);
            suma+= ostatnia;
        }

        n = n / 10;
    }

    return suma;
}

int main (){
    int n = 1234;
    printf("%d", sumOddDigits(n));
}
