#include<iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    int x = 10;
    int y = 20;
    int val;
    int s = x+y;
    int d = x-y;
    int p = x*y;
    int q = x/y;
    int r = y%x;
    cout<<"Enter a value: ";
    cin>>val;
    if(val>= 1 && val<=10)
    {
        cout<<"In between 1 and 10"<<endl;
    }
    else
    {
        cout<<"Not in between"<<endl;
    }
    cout<<"Sum is: "<<s<<endl;
    cout<<"Difference is: "<<d<<endl;
    cout<<"Product is: "<<p<<endl;
    cout<<"Quotient is: "<<q<<endl;
    cout<<"Remainder is: "<<r<<endl;
}