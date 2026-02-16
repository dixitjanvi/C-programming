//Features of structure
//A structure variable can be passed to a Functions
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
    int main(){
    student s={96,97.4,'A'}; //declaration
    print(s);
    return 0;
}
