#include <iostream>
using  namespace std;

int main(){

    int choice;
    cout<<"Enter 1 for positive to negative and 2 for negative to positove : ";
    cin>>choice;

    switch (choice)
    {
    case 1 :
        int number;
        cout<<"Enter a positive number : ";
        cin>>number;
        cout<<"number = "<<number*(-1);
        break;

    case 2 :
        int number;
        cout<<"Enter a negative number : ";
        cin>>number;
        cout<<"number = "<<number*(-1);
        break;
    
    default:
        cout<<"ii";
        break;
    }
}