#include <iostream>
using namespace std;

   int main(){

   int mrp;

   cout<<"Enter mrp : ";
   cin>>mrp;


   if(mrp==20000){

    int cashback = 200;

    cout<<"Selling price :"<<mrp-cashback;
   }
   else if(mrp>20000){

    int cashback = 500;
    cout<<"Selling price :"<<mrp-cashback;
   }
   else{

    cout<<"ii";
   }

   }
