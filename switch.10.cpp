#include<iostream>
using namespace std;

int main(){

    int choice;
    cout<<"Enter choice A for Tea and B for Coffee: ";
    cin>>choice;

    switch (choice)
    {
    case 'A' : cout<<"Enter choice for tea A for Ginger tea and B for Jaggery tea : ";
               cin>>choice;

        switch(choice)
        {
            case 'A' : cout<<"Ginger tea";
            case 'B' : cout<<"Jaggery tea";
        }
        break;
        case 'B' : cout<<"Enter choice for coffee A for Mocha  and B for Cold Coffee : ";
        cin>>choice;

        switch(choice)
        {
            case 'A' : cout<<"Mocha ";
            case 'B' : cout<<"Cold Coffee";
        }
        break;
    
    default:
        cout<<"ii";
    }
}
    