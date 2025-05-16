#include<iostream>
using namespace std;
int main()
{
    string name,str;
    int len;
    char ch;
    cout<<"Enter name: ";
    getline(cin,name);
    len = name.length();
    cout<<name<<endl;
    cout<<name.size()<<endl;
    cout<<name.empty()<<endl;
    cout<<name.capacity()<<endl;
    cout<<name.at(0)<<endl;
    cout<<"Enter a character: ";
    cin>>ch;
    name.push_back(ch);
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<name.append(str)<<endl;
    cout<<name.insert(1,str)<<endl;
    cout<<name.replace(1, len, str)<<endl;
    cout<<name.find(str)<<endl;
    cout<<name.rfind(str)<<endl;
    cout<<name.compare(str)<<endl;
    
    return 0;
}