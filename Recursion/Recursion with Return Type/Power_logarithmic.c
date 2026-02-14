#include<stdio.h>
int power(int a, int b){
    if(b==0)
        return 1;
  
    int ans=power(a, b/2);
    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", power(a,b));
    return 0;
}
