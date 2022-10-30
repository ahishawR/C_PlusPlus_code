#include <iostream>
using namespace std;
int main(){
    int a[]={7,6,5,4,3,2,9};
    int min=a[0];
    for(int i=1;i<6;i++){
        if(a[i]<min)
        min=a[i];
    }cout<<"minimum num  "<<min<<endl;

    int max=a[0];
    for(int i=1;i<6;i++){
        if(a[i]>max)
        max=a[i];
    } cout<<"maximum num "<<max<<endl;
}
