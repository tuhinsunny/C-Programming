// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main () {
// char *title;
// title = (char *) malloc(15);
// strcpy(title, "c programming is the best of all");
// printf("String = %s, Address = %u\n", title, title);
// return(0);
// } 
#include<stdio.h>
#include<stdlib.h>
int main () {
int i, n;
int *ptr;
printf("Number of blocks to be created:");
scanf("%d",&n);
ptr = (int*)calloc(n, sizeof(int));
printf("Enter %d numbers:\n",n);
for( i=0 ; i < n ; i++ ) {
scanf("%d",&ptr[i]);
}
printf("The numbers entered are: ");
for( i=0 ; i < n ; i++ ) {
printf("%d ",ptr[i]);
}
return(0);
}