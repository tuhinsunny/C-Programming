#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("newtest.txt","r");
    // if(fptr == NULL) {
    //     printf("file doesn't exist\n");
    // }
    // else {
    //     fclose(fptr);
    // }


    // int ch;
    // fscanf(fptr , "%d", &ch);
    // printf("Character : %d\n", ch);
    // fscanf(fptr , "%d", &ch);
    // printf("Character : %d\n", ch);
    // fscanf(fptr , "%d", &ch);
    // printf("Character : %d\n", ch);
    // fscanf(fptr , "%d", &ch);
    // printf("Character : %d\n", ch);
    // fscanf(fptr , "%d", &ch);
    // printf("Character : %d\n", ch);
    // fclose(fptr);

    // fprintf(fptr, "%c" ,'M');
    // fprintf(fptr, "%c" ,'A');
    // fprintf(fptr, "%c" ,'N');
    // fprintf(fptr, "%c" ,'G');
    // fprintf(fptr, "%c" ,'O');
    // fclose(fptr);

    // printf("%c\n" ,fgetc(fptr));
    // printf("%c\n" ,fgetc(fptr));
    // printf("%c\n" ,fgetc(fptr));
    // printf("%c\n" ,fgetc(fptr));
    // printf("%c\n" ,fgetc(fptr));

    // fputc('M',fptr);
    // fputc('A',fptr);
    // fputc('N',fptr);
    // fputc('G',fptr);
    // fputc('O',fptr);

    // char ch = fgetc(fptr);
    // while(ch !=EOF) {
    //     printf("%c" ,ch);
    //     ch =fgetc(fptr);
    // }

    


    fclose(fptr);
    return 0;
}