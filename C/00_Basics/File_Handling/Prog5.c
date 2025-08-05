#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char name[25];
    int age;
    printf("Enter name and age: ");
    scanf("%s %d",name,&age);
    fp = fopen("src.txt", "a");
    if(fp == NULL)
    {
        printf("Error.");
    }
    else
    {
        fprintf(fp, "%s\t%d\n",name, age);
        printf("Data written successfully\n");
        fclose(fp);
    }
    return 0;
}