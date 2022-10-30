#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
         cout<<endl;
        for(j=1;j<=5;j++){
            
            if(i==1||i==5||j==1||j==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
    }


            cout<<endl<<endl;


    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}