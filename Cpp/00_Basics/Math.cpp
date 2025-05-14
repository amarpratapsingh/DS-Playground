#include<iostream>
#include<cmath>
int main()
{
    using std::cout;
    using std::endl;
    int val1 = 10;
    int val2 = 20;
    double power = pow(val1, 2);
    double max = std::max(val1,val2);
    double min = std::min(val1,val2);
    double sroot = sqrt(val1);
    double croot = cbrt(val2);
    cout<<power<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sroot<<endl;
    cout<<croot<<endl;
    return 0;
}