#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digitProduct(int n) {
    if (n<0) return 0;
    int iloczyn = 1;
    while (n>0){
        iloczyn = iloczyn * (n % 10);
        n = n / 10;
    }
    return iloczyn;
}




int main(){
    printf("%d",digitProduct(1234));


}
