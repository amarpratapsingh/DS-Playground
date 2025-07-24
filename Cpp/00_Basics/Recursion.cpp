#include<bits/stdc++.h>
using namespace std;
void N_times(int curr, int val)
{

    if(curr > val)
    {
        return;
    }
    cout<<val<<" "<<endl;
    curr++;
    N_times(curr,val);
}
void N_Names(int curr, int val, string name)
{
    if(curr > val)
    {
        return;
    }
    cout<<name<<endl;
    curr++;
    N_Names(curr,val,name);
}
void Count_asc(int curr, int val)
{
    if(curr > val)
    {
        return;
    }
    cout<<curr<<" "<<endl;
    curr++;
    Count_asc(curr,val);
}
void Count_desc(int val)
{
    if(val < 1)
    {
        return;
    }
    cout<<val<<" "<<endl;
    val--;
    Count_desc(val);
}
void Sum(int curr, int sum)
{
    if(curr < 1)
    {
        cout<<sum<<endl;
        return;
    }
    Sum(curr-1,sum+curr);
}
void Fact(int curr, int fact)
{
    if(curr < 1)
    {
        cout<<fact<<endl;
        return;
    }
    Fact(curr-1,fact*curr);
}
void Reverse(int arr[], int size)
{
    
}
void Palindrome()
{

}
void Fibonacci()
{

}
int main()
{
    int num,curr;
    cin>>num;
    //Sum(num,0);
    //Fact(num,1);
    
    return 0;
}