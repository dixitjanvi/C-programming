#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    float root = sqrt(n);
    printf("Square root = %.2f",root);

    return 0;
}
