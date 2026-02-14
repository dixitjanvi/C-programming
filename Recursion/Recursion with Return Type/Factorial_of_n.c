//Make a function which calculates the factorial of n using recursion.

#include<stdio.h>
//#include<limits.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\n",fact(n));
    //printf("%d",INT_MAX);
    return 0;
}
