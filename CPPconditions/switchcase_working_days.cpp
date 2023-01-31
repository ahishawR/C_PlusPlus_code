#include<iostream>
using namespace std;
int main(){
    char day;
    cout<<"Hit the day ";
    cin>>day;
    switch(day){
        //lower case
        case 'm' :cout<<"working day";break;
        case 't' : cout<<"working day";
        case 'w' :cout<<"working day";break;
        case 'f' :cout<<"working day";break;
        case 's' :cout<<" non working day";
        //upper case
        case 'M' :cout<<"working day";break;
        case 'T' : cout<<"working day";
        case 'W' :cout<<"working day";break;
        case 'F' :cout<<"working day";break;
        case 'S' :cout<<" non working day";
        default : cout<<"ERROR\n";

    }

    return 0;
}