#include<stdio.h>
int main(){
    int arr[5];
    printf("%d",sizeof(arr));        //%lu also
    for(int i=0; i<=4; i++){        //Input
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);       //Output
    }
    return 0;
}
