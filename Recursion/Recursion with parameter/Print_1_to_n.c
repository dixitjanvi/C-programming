#include<stdio.h>
void print(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    print(x+1,n);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    print(1,n);
    return 0;
}


//Without using new variable-Method 2
#include<stdio.h>
void print(int n){
    if(n==0) return;        //base case
    printf("%d\n",n);   //kaam
    print(n-1);            //call
    printf("%d\n",n);   //kaam
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    print(n);
    return 0;
}
