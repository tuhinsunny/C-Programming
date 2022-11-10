#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll = 49;
    s1.cgpa = 9.2;
    //s1.name = "TUHIN"; not cocrrect
    strcpy(s1.name, "Tuhin");

    printf("Student name : %s\n" , s1.name);
    printf("Student roll no. : %d\n" , s1.roll);
    printf("Student cgpa : %f\n" , s1.cgpa);

    return 0;
}