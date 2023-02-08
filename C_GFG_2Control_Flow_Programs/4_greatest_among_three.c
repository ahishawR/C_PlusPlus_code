#include<stdio.h>
int main(){
    /*C program to Find the Largest Number Among Three Numbers
    
    Input: A = 2, B = 8, C = 1
Output: Largest number = 8

Input: A = 231, B = 4751, C = 75821
Output: Largest number = 75821

*/

    int a,b,c;
    a=0;b=0;c=0;
    printf("Enter three numbers as a ");
    scanf("%d",&a);
    printf("Enter three numbers as b ");
    scanf("%d",&b);
    printf("Enter three numbers as c ");
    scanf("%d",&c);

    if(a>b && a>c ){printf("%d a is greater ",a);}
    else if(b>a && b>c){printf("%d b is greater ",b);}
    else if(c>a && c>b){printf("%d c is greater ",c);}
    else {printf("all are same ");}
    return 0;
}