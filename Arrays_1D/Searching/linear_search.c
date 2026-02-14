//Search for an element in an array.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={17,25,39,70,17,6,4,9};
    int n= sizeof(arr)/4;
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    int x = 10;
    bool flag = false;
    for(int i=0; i<n; i++){
       if(arr[i]==x){
           flag = true;
           break;
       } 
    }
    if(flag==true) printf("%d Exists!",x);
    else printf("%d Does not Exists",x);
    return 0;
}
