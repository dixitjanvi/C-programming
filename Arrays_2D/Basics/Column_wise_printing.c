//column wise printing-transpose
#include<stdio.h>
int main(){
    int arr[4][2]={76,80,88,92,82,91,71,98,73};
    //column wise print
    for(int j=0; j<3;  j++){
        for(int i=0; i<3; i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//Example
#include<stdio.h>
int main(){
    int arr[4][2]={76,80,88,92,82,91,71,98};
    //column wise print
    for(int i=0; i<4;  i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
