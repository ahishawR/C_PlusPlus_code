# include<iostream>
using namespace std;
int main(){
    int a[2][3]={3,3,3,3,3,3};
    int b[2][3]={1,1,1,1,1,1};
    int c[2][3],d[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
        cout<<"Addition of matrix \n";
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }
            cout<<"Subtraction of matrix \n";
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<d[i][j]<<" ";
        }cout<<endl;
    }
}