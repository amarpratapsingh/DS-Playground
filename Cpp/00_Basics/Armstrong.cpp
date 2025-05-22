#include<iostream>
#include<cmath>
using namespace std;
void Armstrong(int n)
{
    int i=n;
    int sum=0;
    int last;
    while(i>0)
    {
        last = i%10;
        sum = sum + (last*last*last);
        i/=10;
    }
    if(sum == n)
        printf("Armstrong");
    else
        printf("Not");
}
int main()
{
    int num;
    cin>>num;
    Armstrong(num);   
    return 0;
}