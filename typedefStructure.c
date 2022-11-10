#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    float cgpa;
    char name[100];
}stu;

int main() {
    stu s1 = {49 , 9.5 , "Tuhin Sunny"};
    s1.roll = 45;  
    printf("Roll = %d", s1.roll);
    return 0;
}