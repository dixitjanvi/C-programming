#include<stdio.h>
void backtracking(int n){
    if(n == 0) return;      
    int x = n;             
    printf("%d\n", x);    
    backtracking(n-1);   
    printf("%d\n", x);    
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    backtracking(n);
    return 0;
}
