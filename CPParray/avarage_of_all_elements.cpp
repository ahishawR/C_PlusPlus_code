# include<iostream>
using namespace std;
int main(){
    int n,a[20];
    float sum=0.0;
    cout<<"Length of an array ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<(i+1)<<".Enter elements ";
        cin>>a[i];
        sum +=a[i];
    }
    cout<<"Avarage= "<<(sum/2);
    return 0;
}