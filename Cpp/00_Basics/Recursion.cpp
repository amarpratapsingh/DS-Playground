#include<bits/stdc++.h>
using namespace std;
// void N_times(int n)
// {    
//     if(myCount == n)
//     {
//         return;
//     }
//     cout<<myCount<<" ";
//     myCount++;
//     N_times(n);
// }
void N_names(int curr, int n, string s)
{
    if(curr > n)
    {
        return;
    }
    cout<<s<<endl;
    curr++;
    N_names(curr, n, s);
}
void Count_asc(int curr, int n)
{
    if(curr > n)
    {
        return;
    }
    cout<<curr<<" ";
    curr++;
    Count_asc(curr, n);
}
void Count_desc(int curr)
{
    if(curr < 1)
    {
        return;
    }
    cout<<curr<<" ";
    curr--;
    Count_desc(curr);
}
void Sum(int i, int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    Sum(i-1, sum+i);
}
int main()
{
    int num;
    string name;
    cin>>num;
    Sum(num,0);
    return 0;
}