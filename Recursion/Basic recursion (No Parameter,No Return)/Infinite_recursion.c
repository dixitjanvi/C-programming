#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    greet();  
}
int main(){
    greet();
    return 0;
}
