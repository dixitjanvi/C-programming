//Find the second largest element in the given array.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={4,5,8,9,2,1,3,9,6,7};
    int n= sizeof(arr)/4;
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    //finding max
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    printf("%d is the largest\n",max);
    
    //finding second largest
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    printf("%d is the second largest\n",smax);
    return 0;
}
