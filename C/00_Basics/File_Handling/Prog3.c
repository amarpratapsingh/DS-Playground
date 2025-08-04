#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("src.txt", "r");
    if(fp == NULL)
    {
        perror("Error.");
    }
    else
    {
        //Read character
        int ch_code = '\0'; //character code that is going to be stored 
        while((ch_code = fgetc(fp)) != EOF)
        {
            printf("%d : %c\n", ch_code, ch_code);
        }
        ch_code = fgetc(fp);
        printf("%d : %c\n", ch_code, ch_code);

        ch_code = fgetc(fp);
        printf("%d : %c", ch_code, ch_code);
    }
    return 0;
}