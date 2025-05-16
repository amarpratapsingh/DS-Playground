#include<iostream>
using namespace std;
void printName(string name)
{
    cout<<"Your name is: "<<name<<endl;
}
int Sum(int n1, int n2)
{
    int sum = 0;
    sum = n1 + n2;
    return sum;
}
int main()
{
    string name;
    int num1, num2, sum;
    cout<<"Enter your name: ";
    getline(cin,name);
    printName(name);
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    sum = Sum(num1, num2);
    cout<<"Sum is: "<<sum;
    return 0;
}