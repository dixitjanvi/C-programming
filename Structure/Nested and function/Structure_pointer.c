//Structure Pointers - pass by reference
#include<stdio.h>
    typedef struct student{     //Forming of user define data type
        int roll;
        float per;
        char grade;
    }student;
    void print(student s){
        printf("%d ",s.roll);
        printf("%f ",s.per);
        printf("%c ",s.grade);
    }
    void change(student* p){
        //(*p).grade = 'A';
        p->grade = 'B';
    }
    int main(){
    student s={96,97.4,'A'}; //declaration
    print(s);
    printf("%c\n",s.grade);
    change(&s);
    printf("%c\n",s.grade);
    return 0;
}
