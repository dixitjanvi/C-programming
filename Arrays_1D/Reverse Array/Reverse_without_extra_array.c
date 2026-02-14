//WAP to reverse the array without using any extra array.
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/4;
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //reverse array
    int i=0, j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
