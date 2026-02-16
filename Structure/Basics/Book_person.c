//Create a structure type 'book' with name,price and number of pages as it's attributes.
#include<stdio.h>
#include<string.h>
int main(){
    struct Book{
        char name[50];
        float price;
        int nopages;
    };
    struct Book b;
    strcpy(b.name, "Think and grow rich");
    b.price=250.7;
    b.nopages=320;
    printf("%s\n",b.name);
    printf("%d\n",b.nopages);
    printf("%f\n",b.price);
    return 0;
}
