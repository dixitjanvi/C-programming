#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    int i=0,j=strlen(str)-1;

    while(i<j){
        char t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++; j--;
    }

    puts(str);
  return 0;
}
