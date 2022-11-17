#include <iostream>
using namespace std;
int main(){
     int num1,num2;
     char opera;
     cout<<"enter 1st number \n";
     cin>>num1;
     cout<<"enter 2nd number \n";
     cin>>num2;
     cout<<"enter operator \n";
     cin>>opera;

     switch(opera){
        case 1:'+';
        cout<<(num1+num2);
        break;

        case 2:'-';
        cout<<(num1-num2);
        break;

        case 3:'*';
        cout<<(num1+num2);
        break;

        case 4:'/';
        cout<<(num1/num2);
        break;


     }
     return 0;
}