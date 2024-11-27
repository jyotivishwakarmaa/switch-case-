#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    char ope;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    cout<<"Enter operator(+ , - , *, /) : ";
    cin>>ope;

    switch (ope)
    {
    case '+' : 
            cout<<num1+num2;
        break;

          case '-' : 
            cout<<num1+num2;
        break;

          case '*' : 
            cout<<num1+num2;
        break;

          case '/' : 
            cout<<num1+num2;
        break;
    
    default:
            cout<<"ii";
        break;
    }
}