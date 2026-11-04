#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
    double number1,number2;
    double result;
    char operators;
    std::cout<<"------------CALCULATOR------------"<<'\n';
    std::cout<<"Please provide us with the two number to perform the calculation"<<'\n';
    std::cout<<"Please tell me the first number "<<'\n';
    std::cin>>number1;
    std::cout<<"Please enter the second number"<<'\n';
    std::cin>>number2;
    std::cout<<"tell which operation to perform (+,-,/,*) "<<'\n';
    std::cin>>operators;
    switch(operators)
    {
        case '+':
        result=number1+number2;
        std::cout<<"The result is "<<std::fixed<<std::setprecision(5)<<result;
        break;
        case '-':
        result=number1-number2;
        std::cout<<"The result is "<<std::fixed<<std::setprecision(5)<<result;
        break;
        case '/':
        result=number1/number2;
        std::cout<<"The result is "<<std::fixed<<std::setprecision(5)<<result;
        break;
        case '*':
        result=number1*number2;
        std::cout<<"The result is "<<std::fixed<<std::setprecision(5)<<result;
        break;
        default:
        std::cout<<"Please enter valid operator";
        break;
    }
    std::cout<<'\n'<<"------------Thank you------------"<<'\n';
    return 0;
}