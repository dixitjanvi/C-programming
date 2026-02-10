#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);

    printf("Enter power: ");
    scanf("%d",&b);

    int p = pow(a,b);
    printf("%d raised to power %d is %d",a,b,p);

    return 0;
}
