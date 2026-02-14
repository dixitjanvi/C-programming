#include<stdio.h>
#include<math.h>
int main(){
    int  i;              //global
    for(i=1; i<=3; i++){
        printf("%d ",i);
    }
    printf("%d ",i);
    return 0;
}
