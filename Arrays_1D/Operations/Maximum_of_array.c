//Find the maximum value out of all the elements in the array.
#include<stdio.h>
int main(){
    int arr[]={4,5,8,9,2,1,3,9,6,7};
    int n= sizeof(arr)/4;
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    printf("%d",max);
    return 0;
}

//Approach-2
#include<stdio.h>
int main(){
    int arr[]={4,5,8,9,2,1,3,9,6,7};
    int n= sizeof(arr)/4;
    int max = -1;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    printf("%d",max);
    return 0;
}
