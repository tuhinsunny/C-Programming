#include<stdio.h>
 
int main() {
    char str1[100],str2[100];
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    int f=0;
    for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            f=1;
            break;
        }
    }
    if(f==0)
    printf("Same ");
    else
    printf("Not Same");
    return 0;
}