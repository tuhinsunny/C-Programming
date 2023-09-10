#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,a,b,c;
    printf("Enter the Values of a,b and c :\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0 && b==0)
    printf("No Solution");
    else if(c==0){
        float z;
        z=-(float)(b/a);
        printf("Root is %f",z);
    }
    else if(((b*b)-(4*a*c))<0){
        printf("No Real Roots");
    }
    else{
        x=-b+ sqrt(((b*b)-(4*a*c))/(2*a));
        y=-b- sqrt(((b*b)-(4*a*c))/(2*a));
        printf("%f and %f are the two roots ",x,y);
    }
}