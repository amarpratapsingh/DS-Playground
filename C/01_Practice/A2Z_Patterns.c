#include <stdio.h>
#include <stdlib.h>
void Pattern1(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Pattern2(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Pattern3(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void Pattern4(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
void Pattern5(int n)
{
    for(int i=n; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Pattern6(int n)
{
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void Pattern7(int n) //n=5
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void Pattern8(int n) //n=5
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*n-(2*i-1); j++)
        {
            printf("*");
        }
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void Pattern9(int n)
{
    /*
    Combination of Pattern 7 and 8, so it would be like:
    Pattern7(n)
    Pattern8(n)
    This follows 2 triangles resting on 2 individual bases.
    A different approach would be 2 triangles resting on a single base. Just combine the codes of above 2 functions
    but with a slight change:
    */
   for(int i=1; i<n; i++) //n loops from 1 to n-1, so the upper triangle is 1 less than actual val giving illusion that its resting on the same base.
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++) //while this n loops from 1 to n completely, so this inverted triangle is actually the bigger triangle.
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*n-(2*i-1); j++)
        {
            printf("*");
        }
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void Pattern10(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Pattern11(int n)
{
    int start = 1;
    for(int i=0; i<=n; i++)
    {
        if(i%2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for(int j=0; j<=i; j++)
        {
            printf("%d",start);
            start = 1 - start;
        }
        printf("\n");
    }
}
void Pattern12(int n)
{
    int space = 2*(n-1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        space -= 2;
    }
}
void Pattern13(int n)
{
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d ",num);
            num += 1;
        }
        printf("\n");
    }
}
void Pattern14(int n)
{
    int alphabet = 65;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c",(char)(alphabet+j));
        }
        printf("\n");
    }
}
void Pattern15(int n)
{
    int alphabet = 65;
    for(int i=n; i>=1; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf("%c",(char)(alphabet+j));
        }
        printf("\n");
    }
}
void Pattern16(int n)
{
    int alphabet = 65;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c",(char)(alphabet+i));
        }
        printf("\n");
    }
}
void Pattern17(int n)
{
    for(int i=0; i<n; i++)
    {    
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }
        char ch='A';
        int mid = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++)
        {
            printf("%c",ch);
            if(j<=mid)
                ch++;
            else
                ch--;
        }
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void Pattern18(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch='E'-i; ch<='E'; ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
void Pattern19(int n)
{
    int space = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        printf("\n");
        space += 2;
    }
    int spaces = 2*(n-1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        for(int j=1; j<=spaces; j++)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        spaces -= 2;
    }
}
void Pattern20(int n)
{
    int spaces = 2*(n-1);
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        for(int j=1; j<=spaces; j++)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        spaces -= 2;
    }
    int space = 0;
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        printf("\n");
        space += 2;
    }
}
void Pattern21(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}
void Pattern22(int n)
{
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<7; j++)
        {
            
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Pattern21(n);
    return 0;
}