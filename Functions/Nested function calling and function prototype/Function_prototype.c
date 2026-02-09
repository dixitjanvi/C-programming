//Function prototype
//To counter the problem of calling
#include<stdio.h>
void England(){
    printf("You ara in England\n");
    void Japan();
    Japan();
}
void Japan(){
    printf("You ara in Japan\n");
}
int main(){
    printf("You ara in main\n");
    void India();
}
void India(){
    printf("You are in India\n");
    England();
}
