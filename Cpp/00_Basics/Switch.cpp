#include <iostream>
int main()
{
    int month;
    std::cout<<"Enter month number: ";
    std::cin>>month;
    switch(month)
    {
        case 1:
        case 2:
        case 12:
            std::cout<<"Winter"; 
            break;
        case 3:
        case 4:
        case 5:
            std::cout<<"Spring";
            break;
        case 6:
        case 7:
        case 8:
            std::cout<<"Summer";
            break;
        case 9:
        case 10:
        case 11:
            std::cout<<"Autumn";
            break;
        default:
            std::cout<<"Invalid Input";
            break;
    }
    return 0;
}