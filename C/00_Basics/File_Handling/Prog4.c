#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char input[25];
    fp = fopen("src.txt","w");
    if(fp == NULL)
    {
        printf("Error");
    }
    else
    {
        printf("Enter a string: ");
        gets(input);
        fputs(input, fp);
        printf("Data has returned successfully");
        fclose(fp);
    }
    return 0;
}