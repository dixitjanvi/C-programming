//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even index elements = %d\n", evenSum);
    printf("Sum of odd index elements = %d\n", oddSum);
    printf("Difference = %d\n", evenSum - oddSum);

    return 0;
}
