#include<iostream>
using namespace std;

//switch case

int main(){

    int dimention1, dimention2;
    char choice;

    cout<<"Enter 'c' for circle\n  's' for Square\n  'r' for Rectangle\n";
    cin>>choice;

    switch(choice){

    case 'C':
    case 'c': cout<<"Enter radius : ";
              cin>>dimention1 ;
              cout<<"Area of circle : "<<3.141*dimention1*dimention1<<endl;
              break;

    case 'R':
    case 'r': cout<<"Enter length and width : ";
              cin>>dimention1>>dimention2 ;
              cout<<"Area of rectangle : "<<dimention1*dimention2<<endl;
              break;

    case 'S' :
    case 's': cout<<"Enter side : ";
              cin>>dimention1 ;
              cout<<"Area of square : "<<dimention1*dimention1<<endl;
              break;



    }




}
