#include<stdio.h>
#include<string.h>


struct student {
    int roll;
    float cgpa;
    char name[100];
};
void studentInfo(struct student s1);

int main() {
    struct student s1 = {49 , 9.5 , "TUHIN"};
    studentInfo(s1);

    return 0;
}
void studentInfo(struct student s1) {
    printf("Roll number : %d\n",s1.roll);
    printf("CGPA : %f\n",s1.cgpa);
    printf("Name : %s\n",s1.name);
}