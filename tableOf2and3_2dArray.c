#include<stdio.h>
 
int tables[2][10];
int main() {
    int k=1;
    for(int i=0;i<2;i++) {
        k++;
        for(int j=0;j<10;j++) {
            tables[i][j]=k*(j+1);
        }
    }
    k=1;
    for(int i=0;i<2;i++) {
        k++;
        for(int j=0;j<10;j++) {
            printf("%d * %d = %d\n",k,j+1,tables[i][j]);
        }
    }
    return 0;
}