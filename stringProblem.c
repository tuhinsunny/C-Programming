//Sachin Ramesh Tendulkar
//Output : S.R. Tendulkar
#include<stdio.h>
#include<string.h>

int main() {
    char a[1000];
    int c=0,count=0,i;
    printf("Enter a String : ");
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]==' ')
        c++;
    }
    int store;
    printf("%c.",a[0]);
    for(i=0;i<strlen(a);i++){
        if(a[i]==' ')
        store=i+1;
        if(a[i]==' ' && count<c-1){
            printf("%c.",a[i+1]);
            count++;
        }
    }
    while(store<strlen(a)){
        printf("%c",a[store]);
        store++;
    }
    return 0;
}