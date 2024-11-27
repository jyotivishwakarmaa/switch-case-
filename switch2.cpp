#include<iostream>
using namespace std;

int main(){

    int time;
    cout<<"Enter time : ";
    cin>>time;

    switch(time){

        case 1 ... 11 : cout<<"AM";
        break;

        case 12 ... 23 : cout<<"PM";
        break;

        default : cout<<"ii";
    }

}

