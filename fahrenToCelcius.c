#include<stdio.h>
 
int main() {
    float temp;
    printf("Enter the temperature in degree Fahrenheit : ");
    scanf("%f",&temp);
    printf("%f Fahrenheit to Degree Celcius is %f",temp,(temp-32.0)*5.0/9.0);
    return 0;
}