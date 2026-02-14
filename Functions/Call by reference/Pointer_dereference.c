#include<stdio.h>
int main(){
    int x = 9;
    int* z = &x;
    printf("%d\n",x);
    
    printf("%p\n",&z);
    printf("%d",*z);
    printf("\n\n");
    return 0;
}
