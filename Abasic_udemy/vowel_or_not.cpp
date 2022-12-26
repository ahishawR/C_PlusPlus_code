#include<iostream>
using namespace std;
int main(){
    char cheak;
    cout<<"enter a character\n";
    cin>>cheak;

    if(cheak=='A'||cheak=='a'||cheak=='E'||cheak=='e'||cheak=='I'||cheak=='i'
       ||cheak=='O'||cheak=='o'||cheak=='U'||cheak=='u'){
            cout<<"vowel!!";

    }
        else
        cout<<"not vowel!!";
        return 0;
}