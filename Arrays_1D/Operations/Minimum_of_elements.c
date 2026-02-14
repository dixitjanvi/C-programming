//Find the minimum value of all the elements in the array.
#include<stdio.h>
int main(){
    int arr[]={4,5,8,9,2,1,3,9,6,7};
    int n= sizeof(arr)/4;
    int min = arr[0];
    for(int i=1; i<n-1; i++){
        if(min>arr[i]) min = arr[i];
    }
    printf("%d",min);
    return 0;
}
