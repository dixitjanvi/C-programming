#include<stdio.h>
int main(){
    typedef struct student{     //Forming of user define data type
        int roll;
        float per;
        char grade;
    };
    student s1={96,97.4,'A'}; //declaration
    printf("%c\n",s1.grade);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.per);
    return 0;
}
