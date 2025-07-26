#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("src.txt","a");
    if(fp == NULL)
    {
        printf("Error\n");
    }
    else
    {
        printf("File Opened\n");
        fclose(fp);

    }
    return 0;
}