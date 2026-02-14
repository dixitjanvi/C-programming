//Given a matrix 'a' of dimensionns n*m and 2 coordinates (i1,r1) and (i2,r2).Return the sum of the rectangle from (i1,r1) to (i2,r2).
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r1=0,c1=0,r2=1,c2=1,sum=0;

    for(int i=r1;i<=r2;i++)
        for(int j=c1;j<=c2;j++)
            sum+=a[i][j];

    printf("Sum = %d",sum);
}
