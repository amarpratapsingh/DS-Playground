#include<iostream>
using namespace std;
void Count(int n)
{
    int i,last,count=0;
    i=n;
    while(i>0)
    {
        last = i%10;
        cout<<last<<" ";
        count++;
        i/=10;
    }
    cout<<"\n";
    cout<<count;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Count(num);
    return 0;
}