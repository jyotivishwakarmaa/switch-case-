#include<iostream>
using namespace std;

int main(){

    int a,b,temp;
    cout<<"Enter value for a and b : ";
    cin>>a>>b;

    switch (a==b)
    {
    case 0 : 
        temp = a;
        a = b;
        b = temp;
        cout<<"After swapping : "<<a<<" "<<b;
        break;

        case 1 :
        cout<<"Both are same";
        break;
    
    default:
    cout<<"ii";
        break;
    }


}