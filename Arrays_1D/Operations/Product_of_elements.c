//Calculate the product of all the elements in the given array.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int product;
    for(int i=0; i<n; i++){
        product = product *arr[i];
    }
    printf("%d",product);
    return 0;
}
