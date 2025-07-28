#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("dest.txt", "w");
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    char txt[] = "This is a text line.";
    if(fp == NULL)
    {
        perror("Error\n");
    }
    else
    {
        fputc(ch, fp);
        printf("%c",fputc(ch, fp));
        int i = 0;
        while(txt[i] != '\0')
        {
            fputc(txt[i], fp);
            i++;
        }
        fclose(fp);
    }
    return 0;
}