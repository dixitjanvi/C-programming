//Unions -structure only
//At a time only one attribute can be accessed and infect stored
#include<stdio.h>
typedef union student{
    int roll;
    char grade;
    float percent;
} student;

int main(){

    student s1;
    s1.grade = 'A';     // only ONE member at a time
    printf("%c\n", s1.grade);
    return 0;
}
