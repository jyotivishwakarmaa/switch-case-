#include <iostream>
using namespace std;

int main(){

    int number=1;

    endpoint:
    if(number<=10){

        cout<<2*number<<endl;
        ++number;

        goto endpoint;   //endpoint is a name
    }
}

