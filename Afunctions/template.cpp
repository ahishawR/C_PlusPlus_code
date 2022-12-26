#include<iostream>
using namespace std;

template<class T>
T maxim(T x,T y){
    if(x>y){
        return x;
    }
        else{
            return y;
        }
        
}
    int main(){
        int c=maxim(5,5);
        float d=maxim(1.0,2.0);   //values in double
        cout<<maxim(3.14f,2.14f)<<endl;  //values in float 
        cout<<c<<endl<<d;
        return 0;
    }