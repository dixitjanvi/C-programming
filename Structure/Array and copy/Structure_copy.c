#include<stdio.h>
int main(){
    typedef struct student{     //Forming of user define data type
        int roll;
        float per;
        char grade;
    }student;
    
    student s1={96,97.4,'A'}; //declaration
    student s2=s1;
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    s2.grade='C';
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    return 0;
}
