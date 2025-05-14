#include<iostream>
typedef std::string String;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
    String full_name;
    int age;
    cout<<"What is your name"<<endl;
    cin>>name;
    cout<<"What is your full name"<<endl;
    std::getline(std::cin>>std::ws, full_name);

    cout<<"Hello "<<name<<" \nYour full name is "<<full_name<<endl;
    return 0;
}