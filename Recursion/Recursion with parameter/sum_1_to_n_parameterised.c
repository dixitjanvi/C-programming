#include<stdio.h>
void sum1toN(int n, int sum){
    if(n==0) return;    
    printf("%d\n",sum);  
    printf(n-1,sum+1);         
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    print(n,0);
    return 0;
}
