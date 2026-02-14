//greet()
#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    greet();  // infinite recursion
}
int main(){
    greet();
    return 0;
}
