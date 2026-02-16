//deepcopy
//strcpy() → Copies one string completely into another string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Janvi";
    char ptr[7];
    strcpy(ptr,str);
    
    //str[0]='m';
    printf("%s\n",str);
    printf("%s\n",ptr);
    return 0;
}
