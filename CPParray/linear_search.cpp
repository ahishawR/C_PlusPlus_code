#include<iostream>
using namespace std;
int main(){
    int a[10];int key,n=10;
    cout<<"Enter String\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<"enter key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            cout<<"found "<<i;
            return 0; //program will stop here only;
        }

    }
    cout<<"not found";

}