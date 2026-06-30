#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isAbundant(int n){
    int suma = 0;
    for(int i=1;i<n;i++){
        if (n % i == 0){
            suma+=i;
        }
    }
    //if(suma > n){return 1;}
    //else{return 0;}
    return (suma>n);
}




int main() {
    printf("hejka\n");

    int n = 12;

    printf("Wynik to: %d", isAbundant(n));



    return 0;
}
