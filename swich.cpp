#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter 1 for red, 2 for green and 3 for yellow : ";
    cin>>num;

    switch (num)
    {
    case 1 : 
        cout<<"STOP";
        break;
    
    case 2 : 
        cout<<"GO";
        break;

    case 3 : 
        cout<<"Drive slow";
        break;
    default:

        cout<<"ii";
        break;
    }
}
