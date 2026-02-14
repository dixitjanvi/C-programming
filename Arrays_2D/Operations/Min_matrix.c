#include<stdio.h>
#include<limits.h>
int main(){
    int a[3][3]={4,5,8,9,2,1,3,9,6};
    int min=INT_MAX;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j]<min) min=a[i][j];

    printf("Min = %d",min);
}
