#include<stdio.h>
int main(){
    int x;     //declaration
    x = 5;     //initialization
    struct student{     //Forming of user define data type
        int roll;
        float per;
        char grade;
    };
    struct student s1; //declaration
    s1.grade='A';
    s1.roll=96;
    s1.per=97.4;
    printf("%c\n",s1.grade);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.per);
    
    struct student s2; //declaration
    s2.grade='B';
    s2.roll=87;
    s2.per=92.5;
    printf("%c\n",s2.grade);
    printf("%d\n",s2.roll);
    printf("%f\n",s2.per);
    return 0;
}
