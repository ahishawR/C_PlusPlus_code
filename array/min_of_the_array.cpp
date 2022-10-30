// #include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=5;j++){
             cout<<endl;
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
    // int count=1,i,j;
    // for ( i = 0; i < 4; i++)
    // {
    //     for ( i = 0; i < 4; i++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
        
    // }
    
    return 0;
}