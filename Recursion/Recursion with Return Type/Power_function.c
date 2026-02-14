//Make a function which calculates 'a' raised to the power 'b' using recursion.
#include<stdio.h>
int power(int n,int m){
    if(m==0) return 1;
    return n*power(n,m-1);
}
int main(){
    int n,m;
    printf("Enter base:");
    scanf("%d",&n);
    printf("Enter power:");
    scanf("%d",&m);
    printf("%d raised to power %d is %d.\n",n,m,power(n,m));
    return 0;
}
