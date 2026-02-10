#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    float cube = cbrt(n);
    printf("Cube root = %.2f",cube);
    return 0;
}
