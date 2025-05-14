#include <iostream>
int main()
{
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    if(age>=18)
    {
        std::cout<<"Eligible"<<std::endl;
    }
    else
    {
        std::cout<<"Not Eligible"<<std::endl;
    }
    return 0;
}