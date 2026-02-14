#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
void sum(int x,int y){
    return x+y+z;
}
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    printf("%d\n",sum(x,y));
    return 0;
}
