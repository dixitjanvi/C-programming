//Create a structure type 'person' with name,salary and agr as it's attributes.
//Declare and initialize 2 variables for this.Print the name of first person and age of the other.
#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;
        int salary;
    };
    struct person p1;
    strcpy(p1.name, "Sanvi");
    p1.age=20;
    p1.salary=200000;
    struct person p2 ={"Vidhi",21,30000};
    printf("%s\n",p1.name);
    printf("%d\n",p2.age);
    return 0;
}
