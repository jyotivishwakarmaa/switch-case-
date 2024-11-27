#include<iostream>
using namespace std;

int main(){

    int o = 5;
    switch(o){

    case 1 : int height, breadth;
            height = 10;
            breadth = 12;

    cout<<"Area of rectangle  "<<height*breadth;
    break;

    case 2 : int side;
            side = 2;

    cout<<"Area of square : "<<side*side;
    break;

    case 3 : int radius;
            radius = 2;

    cout<<"Area of circle : "<<2*radius*radius;
    break;

    case 4 : int heightt, breadthh;
             heightt = 2;
             breadthh = 2;

    cout<<"Area of Triangle : "<<(heightt*breadthh)/2;
    break;

    default :

    cout<<"ii";



    }
}

