#include<stdio.h>
void Japan(){
    printf("You ara in Japan\n");
}
void England(){
    printf("You ara in England\n");
    Japan();
}
void India(){
    printf("You are in India\n");
    England();
}
int main(){
    printf("You ara in main\n");
    India();
    return 0;
}
