//strncpy() → Copies only a specified number of characters from one string to another.
#include<stdio.h>
#include<string.h>
int main(){
    char src[] = "Janvi";
    char dest[10];

    strncpy(dest, src, 3);   
    dest[3] = '\0';         
    printf("%s", dest);
    return 0;
}
