//Find the maximum element  in a given matrix.
#include<stdio.h>
int main(){
    int arr[3][3]={4,5,8,9,2,1,3,9,6};
    for(int j=0; j<3;  j++){
        for(int i=0; i<3; i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int n= sizeof(arr)/4;
    int max = -1;
    for(int i=0; i<3; i++){
       for(int j=1; j<3; j++){
           if(max<arr[i][j]) max = arr[i][j];
       }
    }
    printf("%d",max);
    return 0;
}
