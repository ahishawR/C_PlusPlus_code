#include<iostream>
using namespace std;
int main(){
    int a[]={4,8,6,9,5,2,7};
    int sum=0;
    for(int i=0;i<6;i++){
        sum +=a[i];
    }
    cout<<"sum is "<<sum;
}