//sum_1_to_n(n) 
//sum(5)=5+sum(4) , sum(4)=4+sum(3)  //recurance
//sum(1)=1   //recursive tree/recursive ladder
//Formula-sum(n)=n+sum(n-1)

#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int recAns = n+sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
