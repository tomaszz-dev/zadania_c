#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countAbove(int n, int m, int tab[n][m], int value) {

    int ilosc = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            //printf("%d > %d\n ", tab[i][j], value);
            if (tab[i][j] > value){
                ilosc+=1;
            }
        }
    }
    return ilosc;
}




int main(){
    int n = 2;
    int m = 3;
    int value = 4;
    int tab[2][3] = {{2,6,1},{8,-4,5}};

    printf("wieksze: %d", countAbove(n,m,tab, value));

}
