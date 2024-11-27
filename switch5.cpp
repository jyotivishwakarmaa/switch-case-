#include <iostream>
using namespace std;

int main(){

    int grade;
    cout<<"Enter grade : ";
    cin>>grade;

    switch (grade)
    {
    case 10 ... 35 :
        cout<<"FAIL";
        break;

        case 36 ... 75 :
        cout<<"AVERAGE";
        break;

        case 76 ... 100 :
        cout<<"PASS";
        break;
    
    default:

        cout<<"ii";
    
    }
}
