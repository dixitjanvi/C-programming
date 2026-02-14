//If an array arr contains n elemsnts, then check if the given array  is a palindrome or not.(same right & left read)
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int i = 0;
    int j = strlen(str) - 1;
    int flag = 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
