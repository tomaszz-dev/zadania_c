#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPowerOfTwo(int n) {
    if (n<0) return 0;

    while(n % 2 == 0){
        n = n / 2;
    }

    if (n==1) {
        return 1;
    }
    else{
        return 0;
    }
}




int main(){
    printf("%d",isPowerOfTwo(8));


}
