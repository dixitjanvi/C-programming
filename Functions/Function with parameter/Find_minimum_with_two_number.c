#include<stdio.h>
int min(int a, int b){     //Formal parameters
    if(a<b) return a;
    else return b;
}
int main(){
    int a;
    printf("Enter a 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter a 2nd number:");
    scanf("%d",&b);
    int m = min(a,b);      //Actual parameters
    printf("Minimum of %d and %d is %d",a,b,m);
    return 0;
}
