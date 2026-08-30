#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m,int tab2D[n][m])
{
    int suma = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            suma = suma + tab2D[i][j];
        }
    }
    return suma;
}

int main()
{
    int n =2;
    int m=2;
    int tab[2][2] = {{1,2},{3,4}};
    printf("%d", sumMatrix(n,m,tab));
    return 0;
}
