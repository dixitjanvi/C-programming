#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char grade;
        int age;
        int roll;
    };
    struct person arr[3];
    arr[0].grade='A';
    arr[0].age=20;
    arr[0].roll=52;
    
    struct person p={'B',10,51};
    arr[1]=p;
    printf("%d ",arr[1].roll);
    printf("%c ",arr[1].grade);
    printf("%d ",arr[1].age);
    return 0;
}
