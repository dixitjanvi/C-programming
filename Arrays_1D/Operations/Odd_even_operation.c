//Given an array of integers,change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<stdio.h>
int main(){
    int arr[]={4,5,8,9,2,1,3,9,6,7};
    int n= sizeof(arr)/4;
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
    }
    //changes
    for(int i=0; i<n; i++){
        if(i%2!=0) arr[i] *=2;
        else arr[i]  +=10;
    }
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}
