#include<iostream>
using namespace std;
int arr[7];
int main(){
    int array[]={1,2,3,4,7,6,9};
    int check=array[0];
    //finding 1st largest element;
    for( int i=0;i<7;i++){
            if (check<array[i])
            check=array[i];
    }cout<<"1st largest "<<check<<endl;
    //storing elements in arr[7] except 1st largest element;
    for(int i=0,j=0;i<7,j<7;i++,j++){
        if(check!=array[i])
            arr[j]=array[i];
            //cout<<arr[j]<<endl;
    }
    //finding 2nd  largest element;
    int check2=arr[0];
    //cout<<check2<<endl;
    for( int i=0;i<7;i++){
        if (check2<arr[i])
            check2=arr[i];
    }cout<<"2nd largest "<<check2<<endl;
}
    
