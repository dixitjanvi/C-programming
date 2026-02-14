//Array-collection of similar data type in a contiguous memory allocation[list]

#include<stdio.h>
int main(){
    int arr[5]={1,4,7,2,9};   //declaration of an array of size 5
    printf("%d\n",arr[3]);
    printf("%d\n",arr[2]);
    return 0;
}


//Example
#include<stdio.h>
int main(){
    int arr[5]={4,1,2,9,7};
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
