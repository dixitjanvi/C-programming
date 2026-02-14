//2D Arrays/matrix-can be called as array of 'arrays'
//int arr[r][c];
//WAP to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main(){
    int arr[4][2]={76,80,88,92,82,91,71,98};
    //row wise print
    for(int i=0; i<4;  i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
