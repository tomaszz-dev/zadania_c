#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumAboveDiagonal(int n, int m, int **tablica)
{
    int suma = 0;
    for(int i =0;i<n; i++){
        for(int j = 0; j<m; j++){
            if (j>i){
                suma = suma + tablica[i][j];
            }
        }
    }
    return suma;
}




int main(){
    int n = 3;
    int m = 3;

    int **tab = (int **)malloc(n*sizeof(int*));
    for(int i =0; i<n; i++ ){
        tab[i] = (int*)malloc(n * sizeof(int));
    }

    tab[0][0] = 2;  tab[0][1] = 3;  tab[0][2] = -3;
    tab[1][0] = 1;  tab[1][1] = 4;  tab[1][2] = 7;
    tab[2][0] = -3; tab[2][1] = -6; tab[2][2] = 11;

    printf("%d",sumAboveDiagonal(n,m,tab));

    free(tab);
}
