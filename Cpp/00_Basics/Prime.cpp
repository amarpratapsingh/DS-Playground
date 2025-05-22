#include<bits/stdc++.h>
using namespace std;
void Prime(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not");
    }
}
void Other_Method(int n)
{
    int count=0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
            if((n%i) != i)
                count++;
        }
            
    }
    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not");
    }
}
int main()
{
    int num;
    cin>>num;
    Other_Method(num);
    return 0;
}