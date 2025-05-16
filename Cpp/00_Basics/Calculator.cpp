#include <iostream>
int main()
{
    char op;
    double num1;
    double num2;
    double result;
    std::cout<<"Calculator"<<std::endl;
    std::cout<<"Enter operator(+-*/%): ";
    std::cin>>op;
    std::cout<<"Enter operand 1: ";
    std::cin>>num1;
    std::cout<<"Enter operand 2: ";
    std::cin>>num2;
    switch(op)
    {
        case '+':
            result = num1 + num2;
            std::cout<<"Result: "<<result;
            break;
        case '-':
            result = num1 - num2;
            std::cout<<"Result: "<<result;
            break;
        case '*':
            result = num1 * num2;
            std::cout<<"Result: "<<result;
            break;
        case '/':
            result = num1 / num2;
            std::cout<<"Result: "<<result;
            break;
        case '%':
            result = (int)num1 % (int)num2;
            std::cout<<"Result: "<<result;
            break;
        default:
            std::cout<<"Invalid input";
    }
}