#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    // struct student ece[100];
    // ece[0].roll = 1664;
    // ece[0].cgpa=  9.2;
    // strcpy(ece[0].name , "Tuhin");
    struct student s1 = {49 , 9.2 , "Tuhin"};
    printf("Student roll : %d\n", s1.roll);
    struct student *ptr = &s1;
    printf("student roll : %d\n", ptr->roll);
 
    // printf("Name : %s\n",ece[0].name);
    // printf("Roll : %d\n",ece[0].roll);
    // printf("CGPA : %f\n",ece[0].cgpa);

    return 0;
}