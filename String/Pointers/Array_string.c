#include<stdio.h>
int main(){
    char str[]="Janvi";
    char* ptr=str;
    printf("%s\n",str);
    printf("%s\n",ptr); 
    
    str[0]='S';
    printf("%s\n",str);
    printf("%s\n",ptr);
    return 0;
}
