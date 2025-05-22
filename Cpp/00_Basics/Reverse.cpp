#include<iostream>
using namespace std;
void Reverse(int n)
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
    printf("%d",rev);
}
int main()
{
    int num;
    cin>>num;
    Reverse(num);
    return 0;
}