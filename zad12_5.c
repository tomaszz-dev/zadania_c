#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m,int tab1[n][m],int tab2[n][m])
{
    int najw = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            tab2[i][j] = tab1[i][j];
            }
    }
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d\n",tab2[i][j]);
        }
    }
}

int main()
{
    int n =2;
    int m=2;
    int tab[2][2] = {{1,5},{3,4}};
    int tab2[2][2] = {{0,0},{0,0}};
    copyMat(n,m,tab,tab2);
    return 0;
}
