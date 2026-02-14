//Method-I
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    //Swap
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
    return 0;
}


//Method-II
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    
    //Swap
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d\n",x,y);
    return 0;
}

