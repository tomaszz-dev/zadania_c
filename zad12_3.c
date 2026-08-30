#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m,int tab2D[n][m])
{
    int najw = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(tab2D[i][j] > najw){
                najw = tab2D[i][j];
            }

        }
    }
    return najw;
}

int main()
{
    int n =2;
    int m=2;
    int tab[2][2] = {{1,5},{3,4}};
    printf("%d", sumMatrix(n,m,tab));
    return 0;
}
