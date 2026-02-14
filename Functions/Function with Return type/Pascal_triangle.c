//nC0 = 1,nC1 = n

/*#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;    
    }
    return f;
}

int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));   
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", ncr(i, j));
        }
        printf("\n");
    }
    return 0;
}
