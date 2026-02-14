//Count the number of elements in given array greater than a given number x.
#include<stdio.h>
int main(){
    int arr[]={17,25,39,70,17,6,4,9};
    int n= sizeof(arr)/4;
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    int x = 10;
    int count =0;
    for(int i=0; i<n; i++){
       if(arr[i]>x) count++;
    }
    printf("%d",count);
    return 0;
}
