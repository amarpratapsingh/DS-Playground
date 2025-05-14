#include <iostream>

int main()
{
    using std::string; //or using namespace std;
    using std::cout;

    int x = 10;
    double y = 6.9;
    char I = 'A';
    bool val = true;
    string name = "Amar";
    cout <<x<<std::endl;
    cout <<y<<std::endl;
    cout <<I<<std::endl;
    cout <<val<<std::endl;
    cout <<name<<std::endl;
    cout <<"Hello "<<name;
    return 0;
}