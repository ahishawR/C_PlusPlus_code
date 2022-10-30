#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
         cout<<endl;
        for(j=1;j<=5;j++){
            
           // printf("\n");
            if(i==1||i==5||j==1||j==5){
                cout<<"*";
                //printf("* ");
            }
            else{
                cout<<" ";
                //printf(" ");
            }

        }
    }
    return 0;
}