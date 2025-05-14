//typedef is basically alias for avoiding typos
#include<iostream>
#include<vector>
//typedef std::vector<std::pair<std::string ,int>> pairList_T;
typedef std::string String;
int main()
{
    using std::cout;
    //pairList_T pairlist;
    String str = "String";
    cout<<str;
    return 0;
}