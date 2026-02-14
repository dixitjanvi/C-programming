//Calculate the sum of all the element in the given array.
#include<stdio.h>
int main(){
    int arr[]={1,2,5,8,3,7,4,6};
    int n = sizeof(arr)/4;
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum +arr[i];
    }
    printf("%d",sum);
    return 0;
}
