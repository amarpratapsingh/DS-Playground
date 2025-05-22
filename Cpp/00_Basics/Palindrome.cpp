#include<iostream>
using namespace std;
void Palindrome(int n)
{
    int i=n;
    int rev=0;
    int last;
    while(i>0)
    {
        last=i%10;
        rev = (rev*10)+last;
        i/=10;
    }
    if(rev == n)
        printf("Palindrome");
    else
        printf("Not");
}
int main()
{
    int num;
    cin>>num;
    Palindrome(num);
    return 0;
}